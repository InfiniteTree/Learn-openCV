#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main()
{
    string image_path = "C:/Users/AlexChen/Pictures/Saved Pictures/15036.jpg";
    Mat image = imread(image_path, IMREAD_COLOR);
    resize(image, image, { 500, 500 }, 0, 0, cv::INTER_NEAREST);
    
    imshow("Image", image);

    waitKey(0);

    return 0;
}
