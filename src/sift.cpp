#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/opencv.hpp>

#include <opencv2/highgui.hpp>
#include <iostream>


int main(int argc, char const *argv[])
{
    cv::Mat img = cv::imread("/home/ksuresh/cv-practice/src/res/test_1.jpg", cv::IMREAD_GRAYSCALE);
    if (img.empty())
    {
        std::cout << "Could not read the image" << std::endl;
        return 1;
    }
    // cv::imshow("Display window", img);
    cv::Mat kernel1 = cv::Mat::ones(5,5, CV_64F);
    cv::Mat out;

    kernel1 = kernel1 / 25;
    cv::GaussianBlur(img, out, cv::Size(5,5), 5, 5);
    // cv::filter2D(img, out, -1 , kernel1, cv::Point(-1, -1), 0, 4);

    // convolve(img, kernel1, out);
    cv::imshow("Display window", out);
    int k = cv::waitKey(0);
    return 0;
}
