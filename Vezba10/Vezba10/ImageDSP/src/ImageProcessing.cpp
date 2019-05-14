
#include "ImageProcessing.h"
#include "FeatureDetection.h"
#include "ColorSpaces.h"
#include <QDebug>

void imageProcessingFun(const QString& progName, QImage* const outImgs, const QImage* const inImgs, const QVector<double>& params)
{
	int X_SIZE = inImgs->width();
	int Y_SIZE = inImgs->height();

	*outImgs = QImage(*inImgs);

	if (progName == "SIFT Detect")
	{
		SIFTDetect(outImgs->bits(), outImgs->width(), outImgs->height());
	}
	else if (progName == "SIFT Detect and match")
	{
		SIFTDetectPlusMatch(outImgs->bits(), outImgs->width(), outImgs->height(), params[0]);
	}
	else if (progName == "Harris Corner Detector")
	{
		HarisCornerDetection(outImgs->bits(), outImgs->width(), outImgs->height(), params[0]);
	}

}

