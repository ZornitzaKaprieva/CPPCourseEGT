#pragma once
#include <string>
#include "Drinks.h"
class NonAlcoholic : public Drinks
{
public:
	NonAlcoholic(std::string, std::string, float, unsigned int, double, double);
	NonAlcoholic(std::string, std::string, float, unsigned int, double);
	void calculatePrice(void);// ->Quantity* Price + CityTax
	double calculatePriceWithParam(double); //new
	void printDrinks(void) const;
	void setLitters(double);
	double getLitters(void) const;
	void setCityTax(double);
	double getCityTax(void) const;
	~NonAlcoholic();
private:
	double litters;
	double cityTax;


};

