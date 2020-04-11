#include "opencv2/opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;

void arithmetic()
{
    Mat src1 = imread("lenna256.bmp", IMREAD_GRAYSCALE);
    Mat src2 = imread("square.bmp", IMREAD_GRAYSCALE);

    if(src1.empty() || src2.empty()){
        cerr << "File Load Error" << endl;
        return ;
    }   

    imshow("src1", src1);
    imshow("src2", src2);

    Mat dst1, dst2, dst3, dst4;

    add(src1, src2, dst1);
    addWeighted(src1, 0.5, src2, 0.5, 0, dst2);
    subtract(src1, src2, dst3);
    absdiff(src1, src2, dst4);

    imshow("dst1", dst1);
    imshow("dst2", dst2);
    imshow("dst3", dst3);
    imshow("dst4", dst4);

    waitKey();
}

int main()
{
    arithmetic();

    return 0;
}