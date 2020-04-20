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

int main()
{
    labeling_stats();
    return 0;
}