#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main()
{
	Mat src = imread("C:\\OpenCVTest\\lenna.jpg", IMREAD_GRAYSCALE);
	imshow("src", src);

	while (1) {
		int key = waitKeyEx();	// 사용자로부터 키를 기다린다. 
		cout << key << " ";
		if (key == 'q') break;	// 사용자가 ‘q'를 누르면 종료한다. 
		else if (key == 2424832) {   // 왼쪽 화살표 키
			src -= 50;	// 영상이 어두워진다.
		}
		else if (key == 2555904) {   // 오른쪽 화살표 키
			src += 50;	// 영상이 밝아진다. 
		}
		imshow("src", src);	// 변경된 영상을 표시한다.
	}
	return 0;
}
