#pragma once
#include<string>

class Shape
{
public:
	Shape(std::string);
	virtual void draw() = 0; //pure virtual 
protected:
	std::string color; //protected attribute color

};

