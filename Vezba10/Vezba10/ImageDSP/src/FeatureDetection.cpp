#include "FeatureDetection.h"
#include "SIFTLib.h"
#include "ColorSpaces.h"
#include "ImageFilter.h"
#include <list>

using namespace std;

/*******************************************************************************************************************************/
/* Find SIFT keypoints and mark each one with red color*/
/*******************************************************************************************************************************/
void SIFTDetect(uchar input[], int xSize, int ySize)
{
	SiftKeypointList kptList;
	uchar* Y_buff = new uchar[xSize*ySize];
	char* U_buff = new char[xSize*ySize / 4];
	char* V_buff = new char[xSize*ySize / 4];
	/* Convert input image to YUV420 image */
	/* TO DO*/
	RGBtoYUV420(input, xSize, ySize, Y_buff, U_buff, V_buff);
	/* Perform SIFT transformation  */
	/* TO DO*/
	SiftKeypointList list = calculateSIFT(Y_buff, xSize, ySize);
	/* Mark all keypoints in input image */
	/* TO DO*/
	markSIFTKeypointsRGB(input, xSize, ySize, list, 0, 255, 0);

}

/*******************************************************************************************************************************/
/* Helper function. Splits image feature set in half (used for "two image" input)  
/*******************************************************************************************************************************/
void splitFeatures(const SiftKeypointList& in, int width, SiftKeypointList& leftImageKP, SiftKeypointList& rightImageKP)
{
	for (SiftKeypoint kp : in)
	{
		if (kp.c < width / 2)
			leftImageKP.push_back(kp);
		else
			rightImageKP.push_back(kp);
	}
}

/*******************************************************************************************************************************/
/* Calculate Euclidean between two descriptor vectors
/*******************************************************************************************************************************/
double l2Distance(SiftKeypoint kp1, SiftKeypoint kp2)
{
	/* TO DO */
	double dist = 0;
	for (int i = 0; i < 128; i++)
		dist += sqrt((kp1.descriptors[i] - kp2.descriptors[i])*(kp1.descriptors[i] - kp2.descriptors[i]));
	return dist;
}

/*******************************************************************************************************************************/
/* Go through the first set of keypoints, and for each keypoint try to find the match in the second set
/* One feature matches the other if Euclidean distance between them is lower than threshold. 
/*******************************************************************************************************************************/
void matchFeatures(SiftKeypointList leftImageKP, SiftKeypointList rightImageKP, list<pair<QPoint, QPoint>>& matchPairs, double threshold)
{
	/* TO DO */
	double dist;
	for(SiftKeypoint k: leftImageKP)
		for (SiftKeypoint l : rightImageKP)
		{
			dist = l2Distance(k, l);
			if (dist < threshold)
			{
				matchPairs.push_back(pair<QPoint, QPoint>(QPoint(k.r, k.c), QPoint(l.r, l.c)));
			}
		}
}

/*******************************************************************************************************************************/
/* Find SIFT keypoints, split the image in half, match the features from one image with those from another
/* one and connect them with green lines
/*******************************************************************************************************************************/
void SIFTDetectPlusMatch(uchar input[], int xSize, int ySize, double threshold)
{
	SiftKeypointList kptList, kptListLeft, kptListRight;

	uchar* Y_buff = new uchar[xSize*ySize];
	char* U_buff = new char[xSize*ySize / 4];
	char* V_buff = new char[xSize*ySize / 4];

	/* Convert input image to YUV420 image */
	/* TO DO */
	RGBtoYUV420(input, xSize, ySize, Y_buff, U_buff, V_buff);
	/* Perform SIFT transformation  */
	/* TO DO */
	SiftKeypointList kplist = calculateSIFT(Y_buff, xSize, ySize);
	/* Split the features of left and right images in separate lists */
	/* TO DO */
	splitFeatures(kplist, xSize, kptListLeft, kptListRight);
	/* Match the features from two images */
	list<pair<QPoint, QPoint>> matchedDots;
	matchFeatures(kptListLeft, kptListRight, matchedDots, threshold);

	/* Draw a line for each mached feature pair */
	/* TO DO */
	drawMatchedFeaturesLinesRGB(input, xSize, ySize, matchedDots, 0, 0, 255);
	delete[] Y_buff;
	delete[] U_buff;
	delete[] V_buff;

}

/*******************************************************************************************************************************/
/* Harris algorithm for corner detection 
/*******************************************************************************************************************************/
void HarisCornerDetection(uchar input[], int xSize, int ySize, double threshold)
{
	uchar* sobelVertical = new uchar[xSize*ySize];
	uchar* sobelHorizontal = new uchar[xSize*ySize];
	char* U_buff = new char[xSize*ySize / 4];
	char* V_buff = new char[xSize*ySize / 4];

	/* Convert input image to YUV420 image */
	RGBtoYUV420(input, xSize, ySize, sobelVertical, U_buff, V_buff);
	
	/* Create a copy of Y component, since it is needed to calculate derivative in both axis */
	memcpy(sobelHorizontal, sobelVertical, xSize*ySize);

	/* Filter both images with corresponding Sobel operator */
	/* TO DO: */
	double filterh[9] = { -1 / 4.0, -2 / 4.0, -1 / 4.0, 0, 0, 0, 1.0 / 4, 2 / 4.0, 1 / 4.0 };
	double filterv[9] = { -1 / 4, 0, 1 / 4, -2 / 4, 0, 2 / 4, -1 / 4, 0, 1 / 4 };
	convolve2D(sobelHorizontal, xSize, ySize, filterh, 3);
	convolve2D(sobelVertical, xSize, ySize, filterv, 3);
	/* For each pixel, calculate the matrix M, then calculate the R factor and place it in new matrix */
	/* Constant alpha is 0.05. */
	/* TO DO: */
	double* R = new double[xSize*ySize];
	double x2, y2, xy;
	for(int i=0;i<xSize;i++)
		for (int j = 0; j < ySize; j++)
		{
			x2 = sobelHorizontal[j*xSize + i] * sobelHorizontal[j*xSize + i];
			y2 = sobelVertical[j*xSize + i] * sobelVertical[j*xSize + i];
			xy = sobelHorizontal[j*xSize+i] * sobelVertical[j*xSize+i];

			double M[4] = { x2, xy, xy, y2 };
			double det = x2*y2 - xy*xy;
			double trace = x2 + y2;
			R[j*xSize+i] = det - 0.05*trace*trace;
		}
	/* For each entry in R matrix, if the value is greater then threshold, check the 3x3 block arround the pixel
	/* and if it is local maximum, colour the entire 3x3 blok in the input image in blue */
	for(int i=0;i<xSize;i++)
		for (int j = 0; j < ySize; j++)
		{
			if (R[j*xSize + i] > threshold)
			{
				for(int k=0;k<3;k++)
			}
		}

	delete[] sobelVertical;
	delete[] sobelHorizontal;
	delete[] U_buff;
	delete[] V_buff;

}


