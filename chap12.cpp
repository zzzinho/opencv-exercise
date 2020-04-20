#include "opencv2/opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;

void labeling_stats()
{
    Mat src = imread("keyboard.bmp", IMREAD_GRAYSCALE);

    if(src.empty()){
        cerr << "image load error" << endl;
        return ;
    }

    Mat bin;
    threshold(src, bin, 0, 255, THRESH_BINARY | THRESH_OTSU);

    Mat labels, stats, centroid;
    int cnt = connectedComponentsWithStats(bin, labels, stats, centroid);

    Mat dst;
    cvtColor(src, dst, COLOR_GRAY2BGR);

    for(int i = 1; i < cnt; ++i){
        int* label = stats.ptr<int>(i);
        
        if(label[4] < 20) continue;
        rectangle(dst, Rect(label[0], label[1], label[2], label[3]), Scalar(0,255,255));
    }
    
    imshow("src", src);
    imshow("dst", dst);

    waitKey();
    destroyAllWindows();
}

void contours_basic()
{
    Mat src = imread("contours.bmp", IMREAD_GRAYSCALE);
    if(src.empty()){
        cerr << "image load error" << endl;
        return ;
    }

    vector<vector<Point>> contours;
    // 이미 contours.bmp는 이진 영상이다.
    findContours(src, contours, RETR_LIST, CHAIN_APPROX_NONE);

    Mat dst;
    cvtColor(src, dst, COLOR_GRAY2BGR);

    for(int i = 0; i < contours.size(); ++i){
        // 랜덤한 색으로 그리기
        Scalar color(rand() & 255, rand() & 255, rand() & 255);
        drawContours(dst, contours, i, color, 2);
    }

    imshow("src_basic", src);
    imshow("dst_basic", dst);
}

void contours_hier()
{
    Mat src = imread("contours.bmp", IMREAD_GRAYSCALE);
    if(src.empty()){
        cerr << "image load error" << endl;
        return ;
    }

    vector<vector<Point>> contours;
    vector<Vec4i> hierarchy;
    findContours(src, contours, hierarchy, RETR_CCOMP, CHAIN_APPROX_SIMPLE);

    Mat dst;
    cvtColor(src, dst, COLOR_GRAY2BGR);

    for(int idx = 0; idx >= 0; idx = hierarchy[idx][0]){
        Scalar color(rand() & 255, rand() & 255, rand() & 255);
        drawContours(dst, contours, idx, color, -1, LINE_8, hierarchy);
    }

    imshow("src_hier", src);
    imshow("dst_hier", dst);

    waitKey();
    destroyAllWindows();
}

void setLabel(Mat& img, const vector<Point>& pts, const String& label)
{
    Rect rc = boundingRect(pts);
    rectangle(img, rc, Scalar(0,0,255), 1);
    putText(img, label, rc.tl(), FONT_HERSHEY_PLAIN, 1, Scalar(0,0,255));
}

void polygon()
{
    Mat img = imread("polygon.bmp", IMREAD_COLOR);
    if(img.empty()){
        cerr << "image load error" << endl;
        return ;
    }

    Mat gray;
    cvtColor(img, gray, COLOR_BGR2GRAY);

    Mat bin;
    threshold(gray, bin, 200, 255, THRESH_BINARY_INV | THRESH_OTSU);

    vector<vector<Point>> contours;
    findContours(bin, contours, RETR_EXTERNAL, CHAIN_APPROX_NONE);

    for(vector<Point> pts : contours){
        if(contourArea(pts) < 400) continue;

        vector<Point> approx;
        approxPolyDP(pts, approx, arcLength(pts, true)*0.02, true);

        int vtc = (int)approx.size();

        if(vtc == 3)
            setLabel(img, pts, "TRI");
        else if(vtc == 4)
            setLabel(img, pts, "RECT");
        else{
            double len = arcLength(pts, true);
            double area = contourArea(pts, true);
            double ratio = 4. * CV_PI * area / (len * len);

            if(ratio > 0.85){
                setLabel(img, pts, "CIR");
            }
        }
    }

    imshow("img",img);
    waitKey();
}
int main()
{
    //labeling_stats();
    //contours_basic();
    //contours_hier();
    polygon();
    return 0;
}