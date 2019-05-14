
#ifndef _FEATURE_DETECTION_H_
#define _FEATURE_DETECTION_H_

#include <QtGlobal>

/*******************************************************************************************************************************/
/* Find SIFT keypoints and mark each one with red color*/
/*******************************************************************************************************************************/
void SIFTDetect(uchar input[], int xSize, int ySize);

/*******************************************************************************************************************************/
/* Find SIFT keypoints, split the image in half, match the features from one image with those from another 
/* one and connect them with green lines																													
/*******************************************************************************************************************************/
void SIFTDetectPlusMatch(uchar input[], int xSize, int ySize, double threshold);

/*******************************************************************************************************************************/
/* Find all corners in the image using Harris algorithm and mark them with blue color
/*******************************************************************************************************************************/
void HarisCornerDetection(uchar input[], int xSize, int ySize, double threshold);

#endif //  _FEATURE_DETECTION_H_
