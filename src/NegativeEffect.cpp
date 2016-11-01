#include<opencv2/highgui/highgui.hpp>

#include<iostream>

int main()
{
	//Load an Image
	IplImage* img = cvLoadImage("C:/Briefcase/Chess.jpg");
	cv::namedWindow("Image", CV_WINDOW_AUTOSIZE);
	cvShowImage("Image", img);

	//Negative Effect
	cvNot(img, img);
	cv::namedWindow("NegativeEffect", CV_WINDOW_AUTOSIZE);
	cvShowImage("NegativeEffect", img);

	//Wait Key press
	cvWaitKey(0);

	//destroy
	cvDestroyWindow("Image");
	cvDestroyWindow("NegativeEffect");

	return 0;
}