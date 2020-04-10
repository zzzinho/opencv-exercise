#include "opencv2/opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;
/*
void inverse()
{
    Mat img = imread("lenna.bmp");

    if(img.empty()){
        cerr << "File open Error" << endl;
        return;
    }

    namedWindow("img");
    imshow("img", img);

    while(true){
        int keyCode = waitKey();

        if(keyCode == 'i' || keyCode == 'I'){
            img = ~img;
            imshow("img", img);
        }

        else if(keyCode == 'q' || keyCode == 'Q' || keyCode == 27)
            break;
    }
}
*/

void on_mouse(int event, int x, int y, int flags, void*);
void on_level_change(int pos, void* userdata);
void mask_setTo();
void mask_copyTo();
/*
int main()
{   
    //mask_setTo();
    mask_copyTo();
    return 0;
}
*/
/*
void on_mouse(int event, int x, int y, int flags, void*)
{
    switch(event){/
        case EVENT_LBUTTONDOWN:
            pt01d = Point(x,y);
            cout << "EVENT_LBUTTONDOWN: " << x << ", " << y << endl;
            break;
        case EVENT_LBUTTONUP:
            pt01d = Point(x,y);
            cout << "EVENT_LBUTTONUP: " << x << ", " << y << endl;
            break;
        case EVENT_MOUSEMOVE:
            if(flags & EVENT_FLAG_LBUTTON){
                line(img, pt01d, Point(x,y), Scalar(0,255,255), 2);
                imshow("img", img);
                pt01d = Point(x,y);
            }
        break;
        default:
            break;
    }
}

void on_level_change(int pos, void* userdata)
{
    Mat img = *(Mat*)userdata;

    img.setTo(pos * 16);
    imshow("image", img);
}
*/

void mask_setTo()
{
    Mat src = imread("lenna.bmp", IMREAD_COLOR);
    Mat mask = imread("mask_smile.bmp", IMREAD_GRAYSCALE);

    if(src.empty() || mask.empty()){
        cerr << "file open error" << endl;
        return;
    }

    src.setTo(Scalar(0,255,255), mask);

    imshow("src", src);
    imshow("mask", mask);

    waitKey();
    destroyAllWindows();
}

void mask_copyTo()
{
    Mat src = imread("airplane.bmp", IMREAD_COLOR);
    Mat mask = imread("mask_plane.bmp", IMREAD_GRAYSCALE);
    Mat dst = imread("field.bmp", IMREAD_COLOR);

    if(src.empty() || mask.empty() || dst.empty()){
        cerr << "file open error" << endl;
        return;
    }

    src.copyTo(dst, mask);

    imshow("dst", dst);
    imshow("src", src);
    imshow("mask", mask);

    waitKey();
    destroyAllWindows();
}