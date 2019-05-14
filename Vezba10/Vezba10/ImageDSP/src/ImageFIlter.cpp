#include "ImageFilter.h"


void convolve2D (uchar Y_buff[], int xSize, int ySize, double filterCoeff[], int N)
{

	int newXSize = xSize + (N - 1);
	int newYSize = ySize + (N - 1);

	uchar* extendedImage = new uchar[newXSize*newYSize];

	extendBorders(Y_buff, xSize, ySize, extendedImage, (N - 1) / 2);

	for (int i = 0; i < xSize; i++)
	{
		for (int j = 0; j < ySize; j++)
		{
			double accum = 0;
			for (int m = 0; m < N; m++)
			{
				for (int n = 0; n < N; n++)
				{

					accum += extendedImage[(j + n) * newXSize + i + m] * filterCoeff[(N - n) * N - m - 1];
				}
			}
			if (accum > 255.0)
				Y_buff[j * xSize + i] = 255;
			else if (accum < 0.0)
				Y_buff[j * xSize + i] = 0;
			else
				Y_buff[j * xSize + i] = floor(accum + 0.5);
		}
	}
	
	delete[] extendedImage;
}

void extendBorders(uchar input[], int xSize, int ySize, uchar output[], int delta)
{
	int newXSize = xSize + 2 * delta;
	int newYSize = ySize + 2 * delta;

	for (int i = 0; i < xSize; i++)
	{
		for (int j = 0; j < ySize; j++)
		{
			output[(j + delta) * newXSize + i + delta] = input[j * xSize + i];
		}
	}

	for (int i = 0; i < delta; i++)
	{
		memcpy(&output[i * newXSize + delta], &input[0], xSize);
		memcpy(&output[(ySize + delta + i)*newXSize + delta], &input[(ySize - 1) * xSize], xSize);
	}

	for (int i = 0; i < newYSize; i++)
	{
		memset(&output[i * newXSize], output[i * newXSize + delta], delta);
		memset(&output[i * newXSize + delta + xSize], output[i * newXSize + xSize + delta - 1], delta);
	}
}

