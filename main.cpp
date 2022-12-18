
#include <iostream>
#include <opencv2/opencv.hpp>

int main(int argc, char const *argv[])
{
    std::cout << "OpenCV Hello the world..." << std::endl;
    cv::Mat image;
    image = cv::imread("dog.jpg",1);
    cv::imshow("START PROJECT WITH OPENCV", image);
    cv::waitKey(0);
    return 0;
}
