#include "Circle.h"

Circle::Circle(int _diametre)
{
	cv::Mat image = cv::Mat::zeros(500, 500, CV_8UC3);

	cv::Point center(250, 250);
	int radius = _diametre;
	cv::circle(image, center, radius, cv::Scalar(0, 0, 255), 2);
	cv::imshow("Cercle", image);
	cv::waitKey(0);

}

int Circle::getDiametre()
{
	return diametre;
}
