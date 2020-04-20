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

void on_trackbar(int pos, void* usrdata);

void adptTresh()
{
    Mat src = imread("sudoku.jpg", IMREAD_GRAYSCALE);
    if(src.empty()){
        cerr << "Image open Error" << endl;
        return ;
    }

    imshow("src", src);

    namedWindow("dst");
    createTrackbar("Block Size", "dst", 0, 200, on_trackbar, (void*) &src);
    setTrackbarPos("Block Size", "dst", 11);

    waitKey(0);
}

void on_trackbar(int pos, void* usrdata)
{
    Mat src = *(Mat*)usrdata;

    int bsize = pos;
    if(bsize % 2 == 0) --bsize;
    if(bsize < 3) bsize = 3;

    Mat dst;
    adaptiveThreshold(src, dst, 255, ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY, bsize, 5);
    imshow("dst", dst);
}

void erode_dilate()
{
    Mat src = imread("milkdrop.bmp",IMREAD_GRAYSCALE);
    if(src.empty()){
        cerr << "Image Load Error!!" << endl;
        return ;
    }
    Mat bin;
    threshold(src, bin, 0, 255, THRESH_BINARY | THRESH_OTSU);

    Mat dst1, dst2;

    erode(bin, dst1, Mat());
    dilate(bin, dst2, Mat());

    imshow("src" ,src);
    imshow("bin", bin);
    imshow("eorde", dst1);
    imshow("dilate", dst2);

    waitKey();
    destroyAllWindows();
}

void open_close()
{
    Mat src = imread("milkdrop.bmp", IMREAD_GRAYSCALE);
    if(src.empty()){
        cerr << "Image Load Error" << endl;
        return ;
    }
    Mat bin;
    threshold(src, bin, 0, 255, THRESH_BINARY | THRESH_OTSU);

    Mat open, close;

    morphologyEx(bin, open, MORPH_OPEN, Mat());
    morphologyEx(bin, close, MORPH_CLOSE, Mat());

    imshow("src", src);
    imshow("bin", bin);
    imshow("open", open);
    imshow("close", close);

    waitKey();
    destroyAllWindows();
}
/*
int main()
{
    //findROI();
    //adptTresh();
    //erode_dilate();
    open_close();
    return 0;
}
*/