#pragma once
#include "Shape.h"

class Circle : public Shape
{
public: 
	Circle(std::string color, double); //constructor with parameters color and radius
	void draw() override; //function override from Shape
	double area() override; // function override from Shape
	
	double radius; //private attribute - radius
	double pi; //private attribute - pi
};

