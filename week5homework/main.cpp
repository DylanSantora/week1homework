#include <iostream>

#include <opencv2/opencv.hpp>

using namespace cv;

int main(){
	Mat img = imread("japan.png");

	Mat img_hsv;
	cvtColor(img, img_hsv, CV_BGR2HSV);

	void Canny(InputArray "japan.png", OutputArray edges, double threshold1, double threshold2)

	void findContours(InputOutputArray "japan.png", OutputArrayOfArrays contours, CV_RETR.LIST, CV_CHAIN_APPROX_NONE)

	void drawContours(InputOutputArray "japan.png", InputArrayOfArrays contours, int.contourldx, const Scalare color)

	vector<vector<Point>>contours;

	


	Mat hueOrig = channels.at(0).clone();
	Mat threshLower, threshUpper;
	Mat result;
	threshold(hueOrig, threshLower, 50, 300, CV_THRESH_BINARY);
	threshold(hueOrig, threshUpper, 180, 255, CV_THRESH_BINARY);
	result = threshLower & threshUpper;
	imshow("Thresholded", result);
	return 0;

	
}
