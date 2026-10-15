#include <iostream>
#include<cmath>
#include "Rectangle.h"


Rectangle::Rectangle(double value_x, double value_y, double ValLenX, double ValLenY)
	: x1(new double(value_x)), y1(new double(value_y)), LenX(ValLenX), LenY(ValLenY)
{
	x2 = new double(*x1);
	y2 = new double(*y1 + ValLenY);
	x3 = new double(*x1 + ValLenX);
	y3 = new double(*y2);
}
Rectangle::Rectangle(double vx1, double vy1, double vx2, double vy2, double vx3, double vy3)
	:x1(new double(vx1)),y1(new double(vy1)), x2(new double(vx2)), y2(new double(vy2)),
	x3(new double(vx3)), y3(new double(vy3))
{
	LenX = *x3 - *x1;
	LenY = *y2 - *y1;

}

Rectangle::~Rectangle() {
	delete x1;
	delete y1;
	delete x2;
	delete y2;
	delete x3;
	delete y3;
}

Rectangle Rectangle::operator-() const {

	return Rectangle(-(*x1),-(*y1),LenX,LenY);

}
bool Rectangle::operator==(const Rectangle& s) const {
	return*x1 == *s.x1 && *y1 == *s.y1 && LenX == s.LenX && LenY == s.LenY;
}


double Rectangle::Square() {

	return LenX * LenY;
}
double Rectangle::Diagonal() {
	return std::sqrt(LenX * LenX + LenY * LenY); 
}

void Rectangle::ÑalculateFirdCord() {
	std::cout << "(x4,y4) = " <<'(' << *x1 + LenX << "," << *y1 << ')' << std::endl;
}

double Rectangle::GetLenX() { return LenX; }
double Rectangle::GetLenY() { return LenY; }
double Rectangle::GetCordX1() { return *x1; }
double Rectangle::GetCordY1() { return *y1; }
double Rectangle::GetCordX2() { return *x2; }
double Rectangle::GetCordY2() { return *y2; }
double Rectangle::GetCordX3() { return *x3; }
double Rectangle::GetCordY3() { return *y3; }