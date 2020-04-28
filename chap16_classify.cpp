#include "opencv2/opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;
using namespace cv::dnn;

int main()
{
    Mat img = imread("space_shuttle.jpg",IMREAD_COLOR);

    if (img.empty()){
        cerr << "Image load fail" << endl;
        return -1;
    }

    Net net = readNet("bvlc_googlenet.caffemodel", "deploy.prototxt");

    if(net.empty()){
        cerr << "Network load fail" << endl;
        return -1;
    }

    ifstream fp("classification_classes_ILSVRC2012.txt");

    if(!fp.is_open()){
        cerr << "Class file load error" << endl;
        return -1;
    }

    vector<String> classNames;
    string name;
    while(!fp.eof()){
        getline(fp, name);
        if(name.length()) classNames.push_back(name);
    }

    fp.close();

    Mat inputBlob = blobFromImage(img,1,Size(224,224), Scalar(104,117,123));
    net.setInput(inputBlob, "data");
    Mat prob = net.forward();

    double maxVal;
    Point maxLoc;
    minMaxLoc(prob, NULL, &maxVal, NULL, &maxLoc);

    String str = format("%s (%4.2lf%%)", classNames[maxLoc.x].c_str(), maxVal * 100);
    putText(img, str, Point(10,30), FONT_HERSHEY_SIMPLEX, 0.8, Scalar(0,0,255));
    imshow("img", img);

    waitKey();
    return 0;
}