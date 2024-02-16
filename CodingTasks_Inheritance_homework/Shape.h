#pragma once
#include<string>

class Shape
{
public:
	Shape(std::string); //constructor with parameter color
	virtual void draw() = 0; //pure virtual 
	virtual ~Shape(); //virtual destructor
protected:
	std::string color; //protected attribute color
};

