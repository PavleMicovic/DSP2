#ifndef SIFTLIB_H_
#define SIFTLIB_H_

#include <qglobal.h>
#include <QPoint.h>
#include <list>
#include "SIFTTypes.h"

using namespace ezsift;

/*******************************************************************************************************************************/
/* Find SIFT keypoints */
/*******************************************************************************************************************************/
SiftKeypointList calculateSIFT(const uchar Y_buff[], int width, int height);

/*******************************************************************************************************************************/
/* Mark SIFT keypoints in monochromatic Image */
/*******************************************************************************************************************************/
void markSIFTKeypointsMono(uchar img[], int width, int height, SiftKeypointList kpList, uchar markValue);

/*******************************************************************************************************************************/
/* Mark SIFT keypoints in RGB image */
/*******************************************************************************************************************************/
void markSIFTKeypointsRGB(uchar imgRGB[], int width, int height, SiftKeypointList kpList, uchar R, uchar G, uchar B);

/*******************************************************************************************************************************/
/* Mark matched features in RGB image */
/*******************************************************************************************************************************/
void drawMatchedFeaturesLinesMono(uchar input[], int xSize, int ySize, std::list<std::pair<QPoint, QPoint>> matchPairs, uchar markValue);

/*******************************************************************************************************************************/
/* Mark matched features in RGB image */
/*******************************************************************************************************************************/
void drawMatchedFeaturesLinesRGB(uchar input[], int xSize, int ySize, std::list<std::pair<QPoint, QPoint>> matchPairs, uchar R, uchar G, uchar B);

#endif