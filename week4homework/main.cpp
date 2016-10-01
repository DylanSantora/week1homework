#include <iostream>

#include <opencv2/opencv.hpp>

using namespace cv;

int main(int argc, char* argv[]){
	string imageLocation = string(argv[1]);
	Mat img = imread(imageLocation);

	imshow(imageLocation, img);

	waitKey(0);

	return(0);
}
