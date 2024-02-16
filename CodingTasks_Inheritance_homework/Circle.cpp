#include "Circle.h"
#include <iostream>

Circle::Circle(std::string color) : Shape(color) //composition to initialize the color in Circle
{
}

void Circle::draw() // display info for circle
{
	std::cout << "Drawing a " << this->color << " circle" << std::endl;
}

