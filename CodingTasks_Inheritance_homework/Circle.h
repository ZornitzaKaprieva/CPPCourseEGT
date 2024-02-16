#pragma once
#include "Shape.h"

class Circle : public Shape //inheritance
{
public: 
	Circle(std::string color); //constructor with parameter color
	void draw() override; //draw() method overdried
};

