#pragma once
#include <opencv2/core/utility.hpp>
#include <opencv2/tracking.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/highgui.hpp>
#include "ImageProcessor.h"
class DetectedPosition
{
public:
	DetectedPosition(string path);
	~DetectedPosition();
	virtual void run();
protected:
	Mat src;	
	VideoWriter videoWriter;
	VideoCapture capture;
	Size videoSize;
	int frame;
	Rect position;
};
