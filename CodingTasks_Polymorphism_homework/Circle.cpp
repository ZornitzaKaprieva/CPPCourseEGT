#include "Circle.h"
#include <iostream>

#include "Circle.h"
#include <iostream>

Circle::Circle(std::string color, double radius) : Shape(color) //composition to initialize the color in Circle
{
	this->radius = radius;
	this->pi = 3.14;
}

void Circle::draw()
{
	std::cout << "Drawing a " << this->color << " circle" << std::endl;
}

double Circle::area() // calculate area
{
	return this->pi * radius * radius;
}

