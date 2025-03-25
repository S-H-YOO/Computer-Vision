#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main()
{
	Mat src = imread("C:\\OpenCVTest\\lenna.jpg", IMREAD_GRAYSCALE);
	imshow("src", src);

	while (1) {
		int key = waitKeyEx();	// ����ڷκ��� Ű�� ��ٸ���. 
		cout << key << " ";
		if (key == 'q') break;	// ����ڰ� ��q'�� ������ �����Ѵ�. 
		else if (key == 2424832) {   // ���� ȭ��ǥ Ű
			src -= 50;	// ������ ��ο�����.
		}
		else if (key == 2555904) {   // ������ ȭ��ǥ Ű
			src += 50;	// ������ �������. 
		}
		imshow("src", src);	// ����� ������ ǥ���Ѵ�.
	}
	return 0;
}
