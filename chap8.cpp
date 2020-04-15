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

Mat src;
Point2f srcQuad[4], dstQuad[4];

void on_mouse(int event, int x, int y, int flags, void* userdata);
/*
int main()
{
    src = imread("card.bmp");

    if(src.empty()){
        cerr << "image load error" << endl;
        return -1;
    }

    namedWindow("src");
    setMouseCallback("src", on_mouse);

    imshow("src", src);
    waitKey();

    return 0;
}
*/
void on_mouse(int event, int x, int y, int flags, void* userdata)
{
    static int cnt = 0;
    
    if(event == EVENT_LBUTTONDOWN){
        if(cnt < 4){
            srcQuad[cnt++] = Point2f(x,y);

            circle(src, Point(x,y), 5, Scalar(0,0,255), -1);
            imshow("src",src);

            if(cnt == 4){
                int w = 200, h = 300;

                dstQuad[0] = Point2f(0,0);
                dstQuad[1] = Point2f(w-1,0);
                dstQuad[2] = Point2f(w-1,h-1);
                dstQuad[3] = Point2f(0,h-1);

                Mat pers = getPerspectiveTransform(srcQuad, dstQuad);

                Mat dst;
                warpPerspective(src, dst, pers, Size(w,h));

                imshow("dst",dst);
            }
        }
    }
}