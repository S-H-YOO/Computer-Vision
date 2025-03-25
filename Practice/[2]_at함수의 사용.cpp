#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

void main() {
	Mat img = imread("C:\\OpenCVTest\\lenna.jpg");
	imshow("Original Image", img);

	for (int r = 0; r < img.rows; r++) {
		for (int c = 0; c < img.cols; ++c) {
			img.at<uchar>(r, c) = saturate_cast<uchar>(img.at<uchar>(r, c) + 30);
		}
	}
	imshow("New Image", img);
	waitKey(0);
	
}
