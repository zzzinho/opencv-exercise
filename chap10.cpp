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
/*
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
*/
void backProject()
{
    Mat ref, ref_ycrcb, mask;
    ref = imread("ref.png", IMREAD_COLOR);
    if(ref.empty()){
        cerr << "image load error" << endl;
        return ;
    }
    mask = imread("mask.bmp", IMREAD_GRAYSCALE);
    cvtColor(ref, ref_ycrcb, COLOR_BGR2YCrCb);

    Mat hist;
    int channels[] = {1,2};
    int cr_bins = 128, cb_bins = 128;
    int histSize[] = {cr_bins, cb_bins};
    float cr_range[] = {0, 256};
    float cb_range[] = {0, 256};
    const float* ranges[] = {cr_range, cb_range};

    calcHist(&ref_ycrcb, 1, channels, mask, hist, 2, histSize, ranges);

    Mat src, src_ycrcb;
    src = imread("kids.png", IMREAD_COLOR);
    if(src.empty()){
        cerr << "kids image open error" << endl;
        return ;
    }
    cvtColor(src, src_ycrcb, COLOR_BGR2YCrCb);

    Mat backproj;
    calcBackProject(&src_ycrcb, 1, channels, hist, backproj, ranges, 1, true);

    imshow("src", src);
    imshow("back Project", backproj);

    waitKey();
}

int main()
{
    //colorHistEqualize();
    //in_range();
    backProject();
    return 0;
}