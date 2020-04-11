#include "opencv2/opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;

Mat calcGrayHist(const Mat& img);
Mat getGrayHistImage(const Mat& hist);

// 밝기 100 증가 시키기
void brightness1(){
    Mat src = imread("lenna.bmp", IMREAD_GRAYSCALE);

    if(src.empty()){
        cerr << "File open error" << endl;
        return;
    }

    Mat dst = src + 100;
    
    imshow("src", src);
    imshow("dst", dst);
    
    waitKey();
    destroyAllWindows();
}

void brightness2()
{
    Mat src = imread("lenna.bmp", IMREAD_GRAYSCALE);

    if(src.empty()){
        cerr << "File Open Error" << endl;
        return;
    }

    Mat dst(src.rows, src.cols, src.type());
    
    for(int i = 0; i < src.rows; ++i)
        for(int j = 0; j < src.cols; ++j)
            dst.at<uchar>(i,j) = src.at<uchar>(i,j) + 100;

    imshow("src", src);
    imshow("dst", dst);
    waitKey();

    destroyAllWindows();
}

void on_brightness(int pos, void* userdata);

void brightness3()
{
    Mat src = imread("lenna.bmp", IMREAD_GRAYSCALE);
    
    if(src.empty()){
        cerr << "File Open Error" << endl;
        return ;
    }

    namedWindow("dst");
    createTrackbar("Brightness", "dst", 0, 100, on_brightness, (void*)&src);
    on_brightness(0, (void*)&src);

    waitKey();
    destroyAllWindows();
}

void on_brightness(int pos, void* userdata)
{
    Mat src = *(Mat*)userdata;
    Mat dst = src + pos;

    imshow("dst",dst);
}

void contrast1()
{
    Mat src = imread("lenna.bmp", IMREAD_GRAYSCALE);

    if(src.empty()){
        cerr << "file open error" << endl;
        return ;
    }

    float s = 2.f;
    Mat dst = s * src;

    imshow("src", src);
    imshow("dst", dst);

    waitKey();
    destroyAllWindows();
}

void contrast2()
{
    Mat src = imread("lenna.bmp", IMREAD_GRAYSCALE);

    if(src.empty()){
        cerr << "file open error" << endl;
        return ;
    }

    float alpha = 1.f;
    Mat dst = src + (src -128) * alpha;
    
    Mat srcHist = calcGrayHist(src);
    Mat dstHist = calcGrayHist(dst);
    srcHist = getGrayHistImage(srcHist);
    dstHist = getGrayHistImage(dstHist);

    imshow("srcHist", srcHist);
    imshow("dstHist", dstHist);
    imshow("src", src);
    imshow("dst", dst);

    waitKey();
    destroyAllWindows();
}

Mat calcGrayHist(const Mat& img)
{
    CV_Assert(img.type() == CV_8UC1);

    Mat hist;
    int channels[] = {0};
    int dims =1;
    const int histSize[] = { 256 };
    float graylevel[] = {0, 256 };
    const float* ranges[] = { graylevel };

    calcHist(&img, 1, channels, noArray(), hist, dims, histSize, ranges);

    return hist;
}

Mat getGrayHistImage(const Mat& hist)
{
    CV_Assert(hist.type() == CV_32FC1);
    CV_Assert(hist.size() == Size(1,256));

    double histMax;
    minMaxLoc(hist, 0, &histMax);

    Mat imgHist(100, 256, CV_8UC1,Scalar(255));
    for(int i = 0; i < 256; ++i)
        line(imgHist, Point(i, 100), Point(i, 100 -cvRound(hist.at<float>(i,0) * 100 / histMax)), Scalar(0));
    
    return imgHist;
}

void histogram_stretching()
{
    Mat src = imread("hawkes.bmp", IMREAD_GRAYSCALE);

    if(src.empty()){
        cerr << "Image open error" << endl;
        return ;
    }
    double gmin, gmax;
    minMaxLoc(src,&gmin,&gmax);

    Mat dst = (src - gmin) * 255 / (gmax - gmin);

    imshow("src", src);
    imshow("srcHist", getGrayHistImage(calcGrayHist(src)));

    imshow("dst", dst);
    imshow("dstHist", getGrayHistImage(calcGrayHist(dst)));

    waitKey();
    destroyAllWindows();
}

void histogram_equalization()
{
    Mat src = imread("jinho.png", IMREAD_GRAYSCALE);

    if(src.empty()){
        cerr << "file load error" << endl;
        return ;
    }

    Mat dst;

    equalizeHist(src,dst);

    imshow("src", src);
    imshow("srcHist", getGrayHistImage(calcGrayHist(src)));

    imshow("dst", dst);
    imshow("dstHist", getGrayHistImage(calcGrayHist(dst)));

    waitKey();
    destroyAllWindows();
}
/*
int main()
{
    //brightness1();
    //brightness2();
    //brightness3();

    //contrast1();
    //contrast2();

    //histogram_stretching();
    histogram_equalization();
    return 0;
}
*/