#include <iostream>
#include "opencv2/opencv.hpp"
#include <opencv2/imgproc.hpp>
#include "opencv2/highgui/highgui.hpp"

class RGB
{
private:
	int rouge;
	int bleu;
	int vert;
public:
	RGB(int r, int g, int b);

	int getRouge();
	int getBleu();
	int getVert();
};

RGB::RGB(int r, int g, int b)
	:rouge(r), vert(g), bleu(b) {}
int RGB::getRouge() 
{	return rouge;	}
int RGB::getBleu() 
{	return bleu;	}
int RGB::getVert()
{	return vert;	}

void rectangle(cv::Mat _image, int x, int y, int _longueur, int _largeur, 
	int _epaisseur, RGB _colorepaisseur, RGB _colorrempli) {
	//x,y ici position départ
	cv::rectangle(_image, cv::Point(x, y), cv::Point(_longueur, _largeur),			//fill
		cv::Scalar(_colorrempli.getVert(), _colorrempli.getBleu(), _colorrempli.getRouge()), cv::FILLED);
	cv::rectangle(_image, cv::Point(x, y), cv::Point(_longueur, _largeur),			//epaisseur
		cv::Scalar(_colorepaisseur.getVert(), _colorepaisseur.getBleu(), _colorepaisseur.getRouge()), _epaisseur);
	cv::imshow("OK", _image);
}

int main() 
{
	cv::Mat image = cv::Mat::zeros(300, 300, CV_8UC3);

	rectangle(image, 50, 50, 250, 150, 10, RGB(255, 0, 0), RGB(0, 255, 0));
	rectangle(image, 23, 24, 258, 77, 24, RGB(24, 62, 145), RGB(254, 146, 234));

	cv::waitKey();

	return 0;
}