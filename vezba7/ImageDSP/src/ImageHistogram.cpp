#include "ImageHistogram.h"
#include "qcustomplot.h"


/*******************************************************************************************************************************/
/* Simple contrast improvement */
/*******************************************************************************************************************************/
void simpleContrastImprovement (const uchar input[], int xSize, int ySize, uchar output[])
{
	/* TODO */
	int i,j, minimum=input[0], maksimum=input[0];
	for(i=0;i<xSize;i++)
		for (j = 0; j < ySize; j++) 
		{
			if (input[j * xSize + i] > maksimum)
				maksimum = input[j * xSize + i];
			if (input[j*xSize + i] < minimum)
				minimum = input[j*xSize + i];
		}
	for (i = 0; i<xSize; i++)
		for (j = 0; j < ySize; j++)
		{
			output[j*xSize + i] = ((input[j*xSize + i] - minimum) * 255) / (maksimum - minimum);
		}

}


/*******************************************************************************************************************************/
/* Calculate image histogram */
/*******************************************************************************************************************************/
void calculateHistogram(const uchar input[], int xSize, int ySize, int histogram[])
{
	/* TODO */
	int i, j;
	for (i = 0; i < 256;i++)
		histogram[i]= 0;
	for (i = 0; i < xSize; i++)
		for (j = 0; j < ySize; j++)
			histogram[input[j * xSize + i]]++;
}


/*******************************************************************************************************************************/
/* Equalize image histogram */
/*******************************************************************************************************************************/
void equalizeHistogram(const uchar input[], int xSize, int ySize, uchar output[], uchar L)
{
	/* TODO */
	int i, j;
	int histogram[256];
	calculateHistogram(input, xSize, ySize, histogram);

	int sum = 0, cdf[256];
	for (i = 0; i < 256; i++)
	{
		sum += histogram[i];
		cdf[i] = sum;
	}

	i = 0;
	while (cdf[i] == 0)
		i++;
	int minimum = cdf[i];

	for (i = 0; i < xSize; i++)
		for (j = 0; j < ySize; j++)
		{
			output[j*xSize + i] = round(L*(cdf[input[j*xSize+i]]-minimum)/((xSize*ySize)-minimum));
		}
}

/*******************************************************************************************************************************/
/* Modify colour saturation */
/*******************************************************************************************************************************/
void modifySaturation(const uchar inputRGB[], const uchar inputY[], int xSize, int ySize, uchar outputRGB[], double S)
{
	/* TODO */
	double r, g, b;
	for (int j = 0; j < ySize; j++)
	{
		for (int i = 0; i < xSize; i++)
		{
			r = inputRGB[j*xSize * 3 + i * 3] * S + inputY[j*xSize + i] * (1 - S);
			g= inputRGB[j*xSize * 3 + i * 3+1] * S + inputY[j*xSize + i] * (1 - S);
			b = inputRGB[j*xSize * 3 + i * 3 + 2] * S + inputY[j*xSize + i] * (1 - S);
			if (r > 255)
			{
				outputRGB[j*xSize * 3 + i * 3] = 255;
			}
			else if (r< 0)
			{
				outputRGB[j*xSize * 3 + i * 3] = 0;
			}
			else
			{
				outputRGB[j*xSize * 3 + i * 3] = inputRGB[j*xSize * 3 + i * 3] * S + inputY[j*xSize + i] * (1 - S);
			}

			if (g > 255)
			{
				outputRGB[j*xSize * 3 + i * 3+1] = 255;
			}
			else if (g< 0)
			{
				outputRGB[j*xSize * 3 + i * 3+1] = 0;
			}
			else
			{
				outputRGB[j*xSize * 3 + i * 3+1] = inputRGB[j*xSize * 3 + i * 3+1] * S + inputY[j*xSize + i] * (1 - S);
			}

			if (b > 255)
			{
				outputRGB[j*xSize * 3 + i * 3 + 2] = 255;
			}
			else if (b< 0)
			{
				outputRGB[j*xSize * 3 + i * 3 + 2] = 0;
			}
			else
			{
				outputRGB[j*xSize * 3 + i * 3 + 2] = inputRGB[j*xSize * 3 + i * 3 + 2] * S + inputY[j*xSize + i] * (1 - S);
			}
		}
	}
}

/*******************************************************************************************************************************/
/* Plot image histogram */
/* Returns QImage containing graph with histogram data. */
/* start and end parameters define first and last value for X axis */
/*******************************************************************************************************************************/
QImage createHistogramPlot(int histogram[], int start, int end)
{
	 QCustomPlot& customPlot = QCustomPlot();
	 
	 int vectorSize = end-start+1;
	 int maxValue = 0;
	 QVector<double> x(vectorSize), y(vectorSize);
	 for (int i=0; i<vectorSize; i++)
	 {
	   x[i] = i + start;  
	   y[i] = histogram[i];
	   maxValue = maxValue>=histogram[i]?maxValue:histogram[i];
	 }
	 
	 // create graph and assign data to it:
	 customPlot.addGraph();
	 customPlot.graph(0)->setData(x, y);
	 // give the axes some labels:
	 customPlot.xAxis->setLabel("x");
	 customPlot.yAxis->setLabel("y");
	 // set axes ranges, so we see all data:
	 customPlot.xAxis->setRange(start, end);
	 customPlot.yAxis->setRange(0, maxValue);
	 return customPlot.toPixmap().toImage();
}


