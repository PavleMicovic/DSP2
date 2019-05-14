#ifndef _IMAGE_FILTER_H_
#define _IMAGE_FILTER_H_
#include <QDebug>

void convolve2D (uchar Y_buff[], int xSize, int ySize, double filterCoeff[], int N);

void extendBorders(uchar input[], int xSize, int ySize, uchar output[], int delta);

#endif // _IMAGE_FILTER_H_
