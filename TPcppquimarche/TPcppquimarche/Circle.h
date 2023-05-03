#pragma once
#include "opencv2/opencv.hpp"

class Circle
{
private:
	int diametre;
public:
	Circle(int _diametre);

	int getDiametre();
};

