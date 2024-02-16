#pragma once
#include"Shape.h"

class Rectangle : public Shape //inheritance
{
public:
	Rectangle(std::string, double width, double height);//constructor with parameters color, width, height
	void draw() override; //function override from Shape
	double area() override; // function override from Shape
private:
	double width;
	double height;
};

