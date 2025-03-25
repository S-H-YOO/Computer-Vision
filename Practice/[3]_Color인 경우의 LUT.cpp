#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

void main() {

	Mat img1 = imread("C:\\OpenCVTest\\lenna.jpg", IMREAD_COLOR);
	imshow("Original Image", img1);

	Mat table(1, 256, CV_8UC3, Scalar(0, 0, 0));

	Vec3b* p = (Vec3b*)table.ptr();
	for (int i = 0; i < 3; ++i) {
		p[i][0] = i;
		p[i][1] = 0;
		p[i][2] = 0;
	}

	Mat img2;
	LUT(img1, table, img2);

	imshow("New Image", img2);
	waitKey(100);




}