#include "opencv2/opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;

void on_threshold(int pos, void* userdata)
{
    Mat src = *(Mat*)userdata;

    Mat dst;
    threshold(src, dst, pos, 255, THRESH_BINARY);

    imshow("dst", dst);
}

void findROI()
{
    Mat src = imread("neutrophils.png", IMREAD_GRAYSCALE);

    if(src.empty()){
        cerr << "Image Load Error" << endl;
        return ;
    }

    imshow("src",src);

    namedWindow("dst");
    createTrackbar("Threshold", "dst", 0, 255, on_threshold, (void*)&src);
    setTrackbarPos("Threshold", "dst", 128);
    
    waitKey(0);
}


int main()
{
    findROI();
    return 0;
}