#include "opencv2/opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;

void colorHistEqualize()
{
    Mat src = imread("pepper.bmp", IMREAD_COLOR);
    if(src.empty()){
        cerr << "image load error" << endl;
        return ;
    }

    Mat src_ycrcb;
    cvtColor(src, src_ycrcb, COLOR_BGR2YCrCb);

    vector<Mat> ycrcb_planes;
    split(src_ycrcb, ycrcb_planes);

    equalizeHist(ycrcb_planes[0], ycrcb_planes[0]);

    Mat dst_ycrcb;
    merge(ycrcb_planes, dst_ycrcb);

    Mat dst;
    cvtColor(dst_ycrcb, dst, COLOR_YCrCb2BGR);

    imshow("src", src);
    imshow("dst", dst);

    waitKey();
    destroyAllWindows();
}

int lower_hue = 40, upper_hue = 80;
Mat src, src_hsv, mask;

void on_hue_changed(int, void*);

void in_range()
{
    src = imread("candies.png", IMREAD_COLOR);
    if(src.empty()){
        cerr << "image load error" << endl;
        return ;
    }

    cvtColor(src, src_hsv, COLOR_BGR2HSV);

    imshow("src", src);

    namedWindow("mask");
    createTrackbar("Lower Hue", "mask", &lower_hue, 179, on_hue_changed);
    createTrackbar("Upper Hue", "mask", &upper_hue, 179, on_hue_changed);
    on_hue_changed(0,0);

    waitKey();
}

void on_hue_changed(int, void*){
    Scalar lowerb(lower_hue, 100, 0);
    Scalar upperb(upper_hue, 255, 255);
    inRange(src_hsv, lowerb, upperb, mask);

    imshow("mask", mask);
    
    Mat detect, colorMask;
    cvtColor(mask, colorMask, COLOR_GRAY2BGR);
    bitwise_and(src, colorMask, detect);
    imshow("detect", detect);
}

int main()
{
    //colorHistEqualize();
    in_range();
    return 0;
}