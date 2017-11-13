#pragma once
#include <opencv2\core\core.hpp>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\opencv.hpp>
#include <opencv2\imgproc\imgproc.hpp>
#include <vector>
#include <algorithm>
#include "HeadLightManager.h"
#include "ObjectDetected.h"


using namespace cv;
using namespace std;


/*struct ObjectDetected {
	bool isMatched;
	Rect region;
	Point centroid;
	bool upperPosition;
	int area;
};*/

class ImageProcessor
{
public:
	ImageProcessor();
	~ImageProcessor();
	void threshold_hist(Mat& src);
	void removeNoice(Mat &src, int Eheight, int Ewidth, int Dheight, int Dwidth);
	void detectLight(Mat& srcImg, Mat binaryImg, int offsetX, int offsetY, Rect rightFrontROI, Rect rightMiddleROI);
	int thresholdValue(Mat& src);
	void extractEfficientImage(Mat& src);
	void setHeadLightManager(HeadLightManager headLightManager);
	vector<ObjectDetected> getObjectDetectedVector();
	bool isCarLightHeightDiffYCorrect(int diffY, int distance);	
private:	
	vector<ObjectDetected> ObjectDetectedVector;
	static bool compareDistance(const ObjectDetected &a, const ObjectDetected &b);
	int previousThresholdValue = 0;
	HeadLightManager _headLightManager;
};


