#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(std::string color, double width, double height) : Shape(color) //composition to initialize the color in Rectangle
{
	this->width = width;
	this->height = height;
}

void Rectangle::draw()
{
	std::cout << "Drawing a " << this->color << " rectangle" << std::endl;
}

double Rectangle::area()  // calculate area
{
	return this->width * this->height;
}

