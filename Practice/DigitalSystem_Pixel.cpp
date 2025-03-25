#include <opencv2/opencv.hpp>
#include <GL/glut.h>
#include <GL/glui.h>
#include <iostream>

using namespace std;
using namespace cv;


// RGB ���� 8��Ʈ�� ��� 
// 
#include <opencv2/opencv.hpp>
#include <iostream>
// "C:\\Users\\Hoon\\Desktop\\���_���ڰ��� �����\\basketball.png"

int main() {
    // �̹��� �ε�
    cv::Mat image = cv::imread("C:\\Users\\Hoon\\Desktop\\���_���ڰ��� �����\\soccerball.png"); // �̹��� ���� ��� �Է�
    if (image.empty()) {
        std::cout << "�̹����� �ε��� �� �����ϴ�!" << std::endl;
        return -1;
    }

    // �̹��� ũ�� ����
    cv::Size newSize(200, 200); // ���ο� ũ�� ���� (250x250)
    cv::Mat resizedImage;
    cv::resize(image, resizedImage, newSize);

    // ��������� �̹��� ũ�� Ȯ��
    std::cout << "��������� �̹��� ũ��: " << resizedImage.cols << " x " << resizedImage.rows << std::endl;

    // ��� �ȼ� �� ���
    for (int y = 0; y < resizedImage.rows; ++y) { // ���� ��ȸ
        for (int x = 0; x < resizedImage.cols; ++x) { // ���� ��ȸ
            // �ȼ� �� (BGR ����)
            cv::Vec3b pixel = resizedImage.at<cv::Vec3b>(y, x);
            int blue = pixel[0];
            int green = pixel[1];
            int red = pixel[2];

            // �ȼ� �� ���
            std::cout << "�ȼ� (" << x << ", " << y << ") - R: "
                << red << ", G: " << green << ", B: " << blue << std::endl;
        }
    }

    return 0;
}