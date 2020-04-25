#include "opencv2/opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;
using namespace cv::ml;
/*
Ptr<KNearest> train_knn();
void on_mouse(int event, int x, int y, int flags, void* userdata);

int main()
{
    Ptr<KNearest> knn = train_knn();

    if(knn.empty()){
        cerr << "Training failed!!" << endl;
        return -1;
    }

    Mat img = Mat::zeros(400,400,CV_8U);

    imshow("img", img);
    setMouseCallback("img", on_mouse, (void*)&img);

    while(true){
        int c = waitKey();

        if(c == 27) break;
        else if(c == ' '){
            Mat img_resize, img_float, img_flatten, result;

            resize(img, img_resize, Size(20, 20), 0, 0, INTER_AREA);
            img_resize.convertTo(img_float, CV_32F);
            img_flatten = img_float.reshape(1,1);

            knn->findNearest(img_flatten, 3, result);
            cout << cvRound(result.at<float>(0,0)) << endl;

            img.setTo(0);
            imshow("img", img);
        }
    }
}

Ptr<KNearest> train_knn(void)
{
    Mat digits = imread("digits.png", IMREAD_GRAYSCALE);

    if(digits.empty()){
        cerr << "Image file load error" << endl;
        return NULL;
    }

    Mat train_images, train_labels;

    for (int i = 0; i < 50; ++i)
        for(int j = 0; j < 100; ++j){
            Mat roi, roi_float, roi_flatten;
            roi = digits(Rect(j*20, i*20, 20, 20));
            roi.convertTo(roi_float, CV_32F);
            roi_flatten = roi_float.reshape(1,1);

            train_images.push_back(roi_flatten);
            train_labels.push_back(i / 5);
        }

    Ptr<KNearest> knn = KNearest::create();
    knn->train(train_images, ROW_SAMPLE, train_labels);

    return knn;
}

Point ptPrev(-1,-1);

void on_mouse(int event, int x, int y, int flags, void* userdata)
{
    Mat img = *(Mat*)userdata;

    if(event == EVENT_LBUTTONDOWN)
        ptPrev = Point(x,y);
    else if(event == EVENT_LBUTTONUP)
        ptPrev = Point(-1,-1);
    else if(event == EVENT_MOUSEMOVE && (flags & EVENT_FLAG_LBUTTON)){
        line(img, ptPrev, Point(x,y), Scalar::all(255), 40, LINE_AA, 0);
        ptPrev = Point(x,y);

        imshow("img", img);
    }
}
*/