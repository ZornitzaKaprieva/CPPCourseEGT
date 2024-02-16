#include "Rectangle.h"
#include "Shape.h"
#include <iostream>


Rectangle::Rectangle(std::string color) : Shape(color)//composition to initialize width and hight in Rectangle
{

}

void Rectangle::draw() // display info for rectangle
{
	std::cout << "Drawing a " << this->color << " rectangle" << std::endl;
}

