#pragma once

#include "Animal.h"

class Dog : public Animal
{
public:
	Dog(string, string, char, float, string); //can also: Dog(int, string, string, char); but we have to be careful because we can get it wrong
	void setBark(string);
	string getBark();
	void printInfo(); //override in the Animal printInfo(): so we can see the bark too - we call the parent printInfo() and then add additional information for Dog
private:
	string bark;

};
