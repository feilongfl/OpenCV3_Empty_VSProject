
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main()
{
	string path = "Z:\\1.jpg";
	string Title = "feilong";

	Mat srcimage = imread(path);
	namedWindow(Title, 0);
	imshow(Title, srcimage);
	waitKey(0);

	return 0;
}