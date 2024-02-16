#pragma once
#include"Shape.h"

class Rectangle : public Shape //inheritance
{
public:
	Rectangle(std::string);//constructor with parameter color
	void draw() override; //draw() method overdried
};

