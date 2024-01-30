#pragma once

#include<iostream>
#include <string>

class Drinks
{
public:
	Drinks(std::string, std::string, float, unsigned int); //“Absolut”, “vodka”, 20.3, 2
	virtual void printDrinks(void) const;
	virtual void calculatePrice(void) = 0;
	virtual double calculatePriceWithParam(double) = 0;
	void setName(std::string);
	std::string getName(void) const;
	void setType(std::string);
	std::string getType(void) const;
	void setPrice(float);
	float getPrice(void) const;
	void setQuantity(int);
	unsigned int getQuantity(void) const;
protected:
	std::string name;
	std::string type; //(wine, gin, whiskey, water, juice, ice tea, …)
	float price;
	unsigned int quantity;
};

