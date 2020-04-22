#include "opencv2/opencv.hpp"
#include <iostream>
#include <vector>

using namespace std;
using namespace cv;

void template_matching()
{
    Mat img = imread("circuit.bmp", IMREAD_COLOR);
    Mat tmpl = imread("crystal.bmp", IMREAD_COLOR);

    if(img.empty() || tmpl.empty()){
        cerr << "image load fail!!" << endl;
        return ;
    }

    img = img + Scalar(50,50,50);

    Mat noise(img.size(), CV_32SC3);
    randn(noise, 0, 10);
    add(img, noise, img, Mat(), CV_8UC3);

    Mat res, res_norm;
    matchTemplate(img, tmpl, res, TM_CCOEFF_NORMED);
    normalize(res, res_norm, 0, 255, NORM_MINMAX, CV_8U);

    double maxv;
    Point maxloc;
    minMaxLoc(res, 0, &maxv, 0, &maxloc);
    cout << "maxv: " << maxv << endl;

    rectangle(img, Rect(maxloc.x, maxloc.y, tmpl.cols, tmpl.rows), Scalar(0,0,255), 2);

    imshow("template", tmpl);
    imshow("res_norm", res_norm);
    imshow("img", img);

    waitKey();
    destroyAllWindows();
}

void detect_face()
{
    Mat src = imread("kids.png", IMREAD_COLOR);
    if(src.empty()){
        cerr << "image load erorr" << endl;
        return ;
    }

    CascadeClassifier classifier("/usr/local/Cellar/opencv/4.2.0_3/share/opencv4/haarcascades/haarcascade_frontalface_default.xml");

    if(classifier.empty()){
        cerr << "XML file load error" << endl;
        return ;
    }

    vector<Rect> faces;
    classifier.detectMultiScale(src, faces);
    
    for(Rect rc : faces)
        rectangle(src, rc, Scalar(255,0,255), 2);

    imshow("src", src);

    waitKey();
    destroyAllWindows();
}

void detect_eyes()
{
    Mat src = imread("kids.png");

    if(src.empty()){
        cerr << "image load error" << endl;
        return ;
    }

    CascadeClassifier face_classifier("/usr/local/Cellar/opencv/4.2.0_3/share/opencv4/haarcascades/haarcascade_frontalface_default.xml");
    CascadeClassifier eye_classifier("/usr/local/Cellar/opencv/4.2.0_3/share/opencv4/haarcascades/haarcascade_eye.xml");

    if(face_classifier.empty() || eye_classifier.empty()){
        cerr << "XML file load error" << endl;
        return ;
    }

    vector<Rect> faces;
    face_classifier.detectMultiScale(src, faces);

    for(Rect face : faces){
        rectangle(src, face, Scalar(255,0,255), 2);

        Mat faceROI = src(face);
        vector<Rect> eyes;
        eye_classifier.detectMultiScale(faceROI, eyes);

        for(Rect eye: eyes){
            Point center(eye.x + eye.width / 2, eye.y + eye.height / 2);
            circle(faceROI, center, eye.width / 2, Scalar(255,0,0), 2, LINE_AA);
        }
    }

    imshow("src", src);
    waitKey();
    destroyAllWindows();
}

void hogdetect(){
    VideoCapture cap("vtest.avi");

    if(!cap.isOpened()){
        cerr << "Video open failed!" << endl;
        return;
    }

    HOGDescriptor hog;
    hog.setSVMDetector(HOGDescriptor::getDefaultPeopleDetector());

    Mat frame;
    while(true){
        cap >> frame;
        if(frame.empty()) break;

        vector<Rect> detected;
        hog.detectMultiScale(frame, detected);

        for(Rect rc : detected){
            Scalar c = Scalar(rand()%256, rand()%256, rand()%256);
            rectangle(frame, rc, c, 3);
        }

        imshow("frame", frame);
        if(waitKey(10) == 27) break;
    }
}

void decode_qrcode()
{
    VideoCapture cap(0);

    if(!cap.isOpened()){
        cerr << "Camera open failed" << endl;
        return ;
    }

    QRCodeDetector detector;

    Mat frame;
    while(true){
        cap >> frame;

        if(frame.empty()){
            cerr << "Frame load fail" << endl;
            return ;
        }
        vector<Point> points;
        String info = detector.detectAndDecode(frame, points);

        if(!info.empty()){
            polylines(frame, points, true, Scalar(0,0,255), 2);
            putText(frame, info, Point(10,30), FONT_HERSHEY_DUPLEX, 1, Scalar(0,0,255));
        }

        imshow("frame", frame);
        if(waitKey(1) == 27) break;
    }
}
/*
int main()
{
    //template_matching();
    //detect_face();
    //detect_eyes();
    //hogdetect();
    decode_qrcode();
    return 0;
}
*/