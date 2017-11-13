#pragma once
#include "DetectedPosition.h"
class DetectedBack :public DetectedPosition
{
public:
	DetectedBack(string path);
	~DetectedBack();
	void run();
private:
	Mat Src;
	Mat Dst;
	Mat Gray;
	Mat GrayRect;
	Mat GrayRectTemp;
	ImageProcessor imageProcessor;
};

