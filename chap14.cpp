#include "opencv2/opencv.hpp"
#include <iostream>
#include <vector>

using namespace std;
using namespace cv;

void corner_harris()
{
    Mat src = imread("building.jpg", IMREAD_GRAYSCALE);
    if(src.empty()){
        cerr << "Image load error" << endl;
        return ;
    }

    Mat harris;
    cornerHarris(src, harris, 3, 3, 0,04);

    Mat harris_norm;
    normalize(harris, harris_norm, 0, 255, NORM_MINMAX, CV_8U);

    Mat dst;
    cvtColor(src, dst, COLOR_GRAY2BGR);

    for(int row=1; row < harris.rows -1; ++row)
        for(int col=1; col < harris.cols-1; ++col)
            if(harris_norm.at<uchar>(row, col) > 120)
                if(harris.at<float>(row, col) > harris.at<float>(row-1, col)
                && harris.at<float>(row,col) > harris.at<float>(row+1,col)
                && harris.at<float>(row,col) > harris.at<float>(row, col-1)
                && harris.at<float>(row,col) > harris.at<float>(row, col+1))
                    circle(dst, Point(col,row), 5, Scalar(0,0,255), 2);

    imshow("src", src);
    imshow("harris_norm", harris_norm);
    imshow("dst", dst);

    waitKey();
    destroyAllWindows();
}

void corner_fast()
{
    Mat src = imread("building.jpg", IMREAD_GRAYSCALE);

    if(src.empty()){
        cerr << "Image load error" << endl;
        return;
    }

    vector<KeyPoint> keypoints;
    FAST(src, keypoints, 60, true);

    Mat dst;
    cvtColor(src, dst, COLOR_GRAY2BGR);

    for(KeyPoint kp : keypoints){
        Point pt(cvRound(kp.pt.x), cvRound(kp.pt.y));
        circle(dst, pt, 5, Scalar(0,0,255), 2);
    }

    imshow("src", src);
    imshow("dst", dst);

    waitKey();
    destroyAllWindows();
}

void detected_keypoints()
{
    Mat src = imread("box_in_scene.png", IMREAD_GRAYSCALE);
    if(src.empty()){
        cerr << "image load fail" << endl;
        return ;
    }

    Ptr<Feature2D> feature = ORB::create();

    vector<KeyPoint> keypoins;
    feature->detect(src, keypoins);

    Mat desc;
    feature->compute(src, keypoins, desc);

    cout << "keypoint.size(): " << keypoins.size() << endl;
    cout << "desc.size(): " << desc.size() << endl;

    Mat dst;
    drawKeypoints(src, keypoins, dst, Scalar::all(-1), DrawMatchesFlags::DRAW_RICH_KEYPOINTS);

    imshow("src", src);
    imshow("dst", dst);

    waitKey();
    destroyAllWindows();
}

void keypoint_matching()
{
    Mat src1 = imread("box.png", IMREAD_GRAYSCALE);
    Mat src2 = imread("box_in_scene.png", IMREAD_GRAYSCALE);

    if(src1.empty() || src2.empty()){
        cerr << "Image Load Error!!!!" << endl;
        return ;
    }

    Ptr<Feature2D> feature = ORB::create();

    vector<KeyPoint> keypoints1, keypoints2;
    Mat desc1, desc2;
    feature->detectAndCompute(src1, Mat(), keypoints1, desc1);
    feature->detectAndCompute(src2, Mat(), keypoints2, desc2);
    cout << "desc1.size(): " << desc1.size() << endl;
    cout << "desc2.size(): " << desc2.size() << endl;

    Ptr<DescriptorMatcher> matcher = BFMatcher::create(NORM_HAMMING);

    vector<DMatch> matches;
    matcher->match(desc1, desc2, matches);

    Mat dst;
    drawMatches(src1, keypoints1, src2, keypoints2, matches, dst);

    imshow("dst" ,dst);

    waitKey();
    destroyAllWindows();
}

void good_matching()
{
    Mat src1 = imread("box.png", IMREAD_GRAYSCALE);
    Mat src2 = imread("box_in_scene.png", IMREAD_GRAYSCALE);

    if(src1.empty() || src2.empty()){
        cerr << "Image Load Error!!!!" << endl;
        return ;
    }

    Ptr<Feature2D> feature = ORB::create();

    vector<KeyPoint> keypoints1, keypoints2;
    Mat desc1, desc2;
    feature->detectAndCompute(src1, Mat(), keypoints1, desc1);
    feature->detectAndCompute(src2, Mat(), keypoints2, desc2);

    Ptr<DescriptorMatcher> matcher = BFMatcher::create(NORM_HAMMING);

    vector<DMatch> matches;
    matcher->match(desc1, desc2, matches);

    std::sort(matches.begin(), matches.end());
    vector<DMatch> good_matches(matches.begin(), matches.begin() + 50);

    Mat dst;
    drawMatches(src1, keypoints1, src2, keypoints2, good_matches, dst, Scalar::all(-1), Scalar::all(-1), vector<char>(), DrawMatchesFlags::NOT_DRAW_SINGLE_POINTS);

    imshow("dst" ,dst);

    waitKey();
    destroyAllWindows();
}

void find_homography()
{
    Mat src1 = imread("box.png", IMREAD_GRAYSCALE);
    Mat src2 = imread("box_in_scene.png", IMREAD_GRAYSCALE);

    if(src1.empty() || src2.empty()){
        cerr << "image laod error" << endl;
        return ;
    }

    Ptr<Feature2D> feature = ORB::create();

    vector<KeyPoint> keypoints1, keypoints2;
    Mat desc1, desc2;
    feature->detectAndCompute(src1, Mat(), keypoints1, desc1);
    feature->detectAndCompute(src2, Mat(), keypoints2, desc2);

    Ptr<DescriptorMatcher> matcher = BFMatcher::create(NORM_HAMMING);

    vector<DMatch> matches;
    matcher->match(desc1, desc2, matches);

    std::sort(matches.begin(), matches.end());
    vector<DMatch> good_matches(matches.begin(), matches.begin()+50);

    Mat dst;
    drawMatches(src1, keypoints1, src2, keypoints2, good_matches, dst, Scalar::all(-1), Scalar::all(-1), vector<char>(), DrawMatchesFlags::NOT_DRAW_SINGLE_POINTS);

    vector<Point2f> pts1, pts2;
    for(size_t i = 0; i < good_matches.size(); ++i){
        pts1.push_back(keypoints1[good_matches[i].queryIdx].pt);
        pts2.push_back(keypoints2[good_matches[i].trainIdx].pt);
    }

    Mat H = findHomography(pts1, pts2, RANSAC);

    vector<Point2f> corners1, corners2;
    corners1.push_back(Point2f(0,0));
    corners1.push_back(Point2f(src1.cols-1,0));
    corners1.push_back(Point2f(src1.cols-1,src1.rows-1));
    corners1.push_back(Point2f(0,src1.rows-1));
    perspectiveTransform(corners1, corners2, H);

    vector<Point> corners_dst;
    for(Point2f pt : corners2)
        corners_dst.push_back(Point(cvRound(pt.x + src1.cols), cvRound(pt.y)));

    polylines(dst, corners_dst, true, Scalar::all(-1), 2, LINE_AA);

    imshow("dst", dst);

    waitKey();
    destroyAllWindows();
}

void stitching()
{
    vector<Mat> imgs;

    for(int i = 1; i <= 3; ++i){
        Mat img = imread(format("img%d.jpg",i));
        if(img.empty()){
            cerr << "image" << i << " load Error" << endl;
            return ;
        }
        imgs.push_back(img);
    }

    Ptr<Stitcher> stitcher = Stitcher::create();

    Mat dst;
    Stitcher::Status status = stitcher->stitch(imgs, dst);

    if(status != Stitcher::Status::OK){
        cerr << "Error on stitching" << endl;
        return ;
    }

    imwrite("result.jpg", dst);
    imshow("dst", dst);

    waitKey();
}
int main()
{
    //corner_harris();
    //corner_fast();
    //detected_keypoints();
    //keypoint_matching();
    //good_matching();
    //find_homography();
    stitching();
    return 0;
}