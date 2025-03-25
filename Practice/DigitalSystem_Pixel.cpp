#include <opencv2/opencv.hpp>
#include <GL/glut.h>
#include <GL/glui.h>
#include <iostream>

using namespace std;
using namespace cv;


// RGB 각각 8비트씩 사용 
// 
#include <opencv2/opencv.hpp>
#include <iostream>
// "C:\\Users\\Hoon\\Desktop\\디시_수박게임 만들기\\basketball.png"

int main() {
    // 이미지 로드
    cv::Mat image = cv::imread("C:\\Users\\Hoon\\Desktop\\디시_수박게임 만들기\\soccerball.png"); // 이미지 파일 경로 입력
    if (image.empty()) {
        std::cout << "이미지를 로드할 수 없습니다!" << std::endl;
        return -1;
    }

    // 이미지 크기 변경
    cv::Size newSize(200, 200); // 새로운 크기 설정 (250x250)
    cv::Mat resizedImage;
    cv::resize(image, resizedImage, newSize);

    // 리사이즈된 이미지 크기 확인
    std::cout << "리사이즈된 이미지 크기: " << resizedImage.cols << " x " << resizedImage.rows << std::endl;

    // 모든 픽셀 값 출력
    for (int y = 0; y < resizedImage.rows; ++y) { // 세로 순회
        for (int x = 0; x < resizedImage.cols; ++x) { // 가로 순회
            // 픽셀 값 (BGR 순서)
            cv::Vec3b pixel = resizedImage.at<cv::Vec3b>(y, x);
            int blue = pixel[0];
            int green = pixel[1];
            int red = pixel[2];

            // 픽셀 값 출력
            std::cout << "픽셀 (" << x << ", " << y << ") - R: "
                << red << ", G: " << green << ", B: " << blue << std::endl;
        }
    }

    return 0;
}