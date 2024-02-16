#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(std::string color) : Shape(color) //composition to initialize the color in Rectangle
{
}

void Rectangle::draw() // display info for rectangle
{
	std::cout << "Drawing a " << this->color << " rectangle" << std::endl;
}
