#include "opencv2/opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;

void camera_in()
{
    VideoCapture cap(0);

    if(!cap.isOpened()){
        cerr << "Camera Open failed" << endl;
        return;
    }

    cout << "Frame Width: " << cvRound(cap.get(CAP_PROP_FRAME_WIDTH)) << endl;
    cout << "Frame Height: " << cvRound(cap.get(CAP_PROP_FRAME_HEIGHT)) << endl;

    Mat frame, inversed;
    while(true){
        cap.read(frame);
        if(frame.empty())
            break;
        
        inversed = ~frame;

        imshow("frame", frame);
        imshow("inversed", inversed);

        if(waitKey(10) == 27)
            break;
    }

    destroyAllWindows();
}

void camera_in_video_out()
{
    VideoCapture cap(0);

    if(!cap.isOpened()){
        cerr << "Video Open Failed!" << endl;
        return ;
    }

    int w = cvRound(cap.get(CAP_PROP_FRAME_WIDTH));
    int h = cvRound(cap.get(CAP_PROP_FRAME_HEIGHT));
    double fps = cap.get(CAP_PROP_FPS);
    int fourcc = VideoWriter::fourcc('D','I','V','X');
    int delay = cvRound(1000 / fps);

    VideoWriter outputVideo("output.mp4", fourcc, fps, Size(w, h));

    if(!outputVideo.isOpened()){
        cerr << "File Open Fail!" << endl;
        return ;
    }

    Mat frame, inversed;
    while(true){
        cap.read(frame);
        if(frame.empty())
            break;

        inversed = ~frame;

        outputVideo << inversed;

        imshow("frame", frame);
        imshow("inversed", inversed);

        if(waitKey(delay) == 27)
            break;
    }

    destroyAllWindows();
}

void drawLines()
{
    Mat img(400, 400, CV_8UC3, Scalar(255,255,255));

    line(img, Point(50,50), Point(200,50), Scalar(0,0,255));
    line(img, Point(50,100), Point(200, 100), Scalar(255,0,255), 3);
    line(img, Point(50,150), Point(200, 150), Scalar(255,0,0), 10);

    line(img, Point(250,50), Point(350, 100), Scalar(0,0,255), LINE_4);
    line(img, Point(250, 70), Point(350, 120), Scalar(255,255,0), LINE_8);
    line(img, Point(250,90), Point(350,140), Scalar(0,255,200), LINE_AA);

    arrowedLine(img, Point(50,200), Point(150,200), Scalar(0,0,255));
    arrowedLine(img, Point(50,250), Point(150, 250), Scalar(100,100,0));
    arrowedLine(img, Point(50,300), Point(150, 300), Scalar(100,13,44));

    drawMarker(img, Point(50, 350), Scalar(200,30,22), MARKER_CROSS);
    drawMarker(img, Point(100,350), Scalar(22,44,55), MARKER_TILTED_CROSS);
    drawMarker(img, Point(150,350), Scalar(43,33,55), MARKER_STAR);

    imshow("img", img);
    waitKey();

    destroyAllWindows();
}

void drawText()
{
    Mat img(200, 640, CV_8UC3, Scalar(255,255,255));

    const String text = "Hello OpenCV";
    int fontFace = FONT_HERSHEY_TRIPLEX;
    double fontScale = 2.0;
    int thickness = 1;

    Size sizeText = getTextSize(text, fontFace, fontScale, thickness,0);
    Size sizeImg = img.size();

    Point org((sizeImg.width - sizeText.width) / 2, (sizeImg.height + sizeText.height) / 2);

    putText(img, text, org, fontFace, fontScale,Scalar(255,0,0),thickness);
    rectangle(img, org, org + Point(sizeText.width, -sizeText.height), Scalar(255,0,0),1);

    imshow("img", img);
    waitKey();

    destroyAllWindows();
}
/*
int main()
{
    //camera_in();
    //camera_in_video_out();
    //drawLines();
    drawText();
    return 0;
}
*/