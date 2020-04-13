#include "opencv2/opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;

void filter_embossing()
{
    Mat src = imread("rose.bmp", CV_8UC1);

    if(src.empty()){
        cerr << "File Load Error!!" << endl;
        return ;
    }

    float kernel[] = {-1,-1, 0,
                    -1, 0, 1,
                    0 , 1, 1};
    Mat emboss(3,3,CV_32FC1, kernel);

    Mat dst;
    filter2D(src, dst, -1, emboss, Point(-1,-1), 128);

    imshow("src", src);
    imshow("dst", dst);

    waitKey();
    destroyAllWindows();
}

void blurring_mean()
{
    Mat src = imread("rose.bmp",CV_8UC1);

    if(src.empty()){
        cerr << "file load error" << endl;
        return;
    }

    imshow("src", src);
    Mat dst;
    for(int ksize=3; ksize<=7; ksize += 2){
        blur(src,dst, Size(ksize,ksize));

        String desc = format("mean: %d x %d", ksize, ksize);
        putText(dst, desc, Point(10,30), FONT_HERSHEY_SIMPLEX, 1.0, Scalar(255), 1, LINE_AA);

        imshow(format("dst %dx%d", ksize, ksize), dst);
    }
    waitKey();
    destroyAllWindows();
}

void blurring_gaussian()
{
    Mat src = imread("rose.bmp",CV_8UC1);

    if(src.empty()){
        cerr << "file open error" << endl;
        return;
    }
    imshow("src", src);
    Mat dst;

    for(int sigma=1; sigma <= 5; ++sigma){
        GaussianBlur(src,dst,Size(),double(sigma));

        String text = format("sigma = %d", sigma);
        putText(dst, text, Point(10,30), FONT_HERSHEY_SIMPLEX, 1.0, Scalar(255), 1, LINE_AA);

        imshow(format("sigma=%d", sigma), dst);
    }
    waitKey();
    destroyAllWindows();
}

void unsharp_mask()
{
    Mat src = imread("rose.bmp", CV_8UC1);

    if(src.empty()){
        cerr << "file load error!!" << endl;
        return;
    }
    imshow("src", src);
    
    for(int sigma = 1; sigma <= 5; ++sigma){
        Mat blurred;
        GaussianBlur(src, blurred, Size(), sigma);

        float alpha = 1.f;
        Mat dst = (1 + alpha)*src - alpha * blurred;

        String desc = format("sigam : %d", sigma);
        putText(dst, desc, Point(10,30), FONT_HERSHEY_SIMPLEX, 1.0, Scalar(255), 1, LINE_AA);

        imshow(format("sigma: %d", sigma), dst);
    }
    waitKey();
    destroyAllWindows();
}
void noise_gaussian()
{
    Mat src = imread("lenna.bmp", IMREAD_GRAYSCALE);

    if(src.empty()){
        cerr << "file open error" << endl;
        return;
    }

    imshow("src", src);

    for(int stddev = 10; stddev <= 50; stddev += 10){
        Mat noise(src.size(), CV_32SC1);
        randn(noise, 0, stddev);

        Mat dst;
        add(src, noise, dst, Mat(), CV_8U);

        String text = format("stddev: %d", stddev);
        putText(dst, text, Point(10,30), FONT_HERSHEY_SIMPLEX, 1.0, Scalar(255), 1, LINE_AA);
        imshow(format("stddev: %d", stddev), dst);
    }
    waitKey();
    destroyAllWindows();
}

void filter_bilateral()
{
    Mat src = imread("lenna.bmp", IMREAD_GRAYSCALE);

    if(src.empty()){
        cerr << "file open error" << endl;
        return ;
    }

    Mat noise(src.size(), CV_32SC1);
    randn(noise, 0, 5);
    add(src, noise, src, Mat(), CV_8U);

    Mat dst1;
    GaussianBlur(src, dst1, Size(), 5);

    Mat dst2;
    bilateralFilter(src, dst2, -1, 10, 5);

    imshow("src", src);
    imshow("dst1", dst1);
    imshow("dst2",dst2);

    waitKey();
    destroyAllWindows();
}

void filter_median()
{
    Mat src = imread("lenna.bmp", IMREAD_GRAYSCALE);

    if(src.empty()){
        cerr << "image load error" << endl;
        return ;
    }

    int num = (int)(src.total() * 0.1);
    for(int i = 0; i < num; ++i){
        int x = rand() % src.cols;
        int y = rand() % src.rows;
        src.at<uchar>(y,x) = (i % 2) * 255;
    }

    Mat dst1;
    GaussianBlur(src, dst1, Size(), 1);

    Mat dst2;
    medianBlur(src, dst2, 3);

    imshow("src", src);
    imshow("Gaussian", dst1);
    imshow("Median", dst2);

    waitKey();
    destroyAllWindows();
}
int main()
{
    //filter_embossing();
    //blurring_mean();
    //blurring_gaussian();
    //unsharp_mask();
    //noise_gaussian();
    //filter_bilateral();
    filter_median();
    return 0;
}