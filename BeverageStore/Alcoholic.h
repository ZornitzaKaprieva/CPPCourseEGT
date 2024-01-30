#pragma once
#include "Drinks.h"
class Alcoholic : public Drinks
{
public:
	Alcoholic(std::string, std::string, float, unsigned int, double, double);
	Alcoholic(std::string, std::string, float, unsigned int, double);
	void calculatePrice(void);
	double calculatePriceWithParam(double); //new
	// > Quantity* (Price + Tax)
	void printDrinks(void) const;
	void setVolume(double);
	double getVolume(void) const;
	void setTax(double);
	double getTax(void) const;
	~Alcoholic();
private:
	double volume;
	double tax;
};

