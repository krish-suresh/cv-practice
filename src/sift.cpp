#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

int main(int argc, char const *argv[])
{
    cv::Mat img = cv::imread("/home/ksuresh/cv-practice/src/res/test.JPG", cv::IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image" << std::endl;
        return 1;
    }
    cv::imshow("Display window", img);
    int k = cv::waitKey(0);
    return 0;
}
