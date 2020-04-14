#include "opencv2/opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;

void affine_transform()
{
    Mat src = imread("tekapo.bmp");

    if(src.empty()){
        cerr << "image load error!" << endl;
        return ;
    }

    Point2f srcPts[3], dstPts[3];
    srcPts[0] = Point2f(0,0);
    srcPts[1] = Point2f(src.cols-1,0);
    srcPts[2] = Point2f(src.cols-1, src.rows-1);
    dstPts[0] = Point2f(50,50);
    dstPts[1] = Point2f(src.cols-100, 100);
    dstPts[2] = Point2f(src.cols-50, src.rows-50);

    Mat M  = getAffineTransform(srcPts, dstPts);

    Mat dst;
    warpAffine(src, dst, M, Size());

    imshow("src", src);
    imshow("dst", dst);

    waitKey();
    destroyAllWindows();
}

int main()
{
    affine_transform();
}