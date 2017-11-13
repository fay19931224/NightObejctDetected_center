#include <opencv2\opencv.hpp>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\core\core.hpp>
#include <opencv2\imgproc\imgproc.hpp>
#include <iostream>
#include "ImageProcessor.h"
#include "DetectedRight.h"
#include "DetectedBack.h"

using namespace std;
using namespace cv;

int main() {		
	string path = "C:/Users/fay/Desktop/back_cut/AV1-20171026_215128.avi"; 
	DetectedPosition *detectedPosition = new DetectedBack(path);
	//DetectedPosition *detectedPosition = new DetectedRight(path);
	detectedPosition->run();
}