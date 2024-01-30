#include "NonAlcoholic.h"



NonAlcoholic::NonAlcoholic(std::string name, std::string type, float price, unsigned int quantity, double litters, double cityTax) : Drinks(name, type, price, quantity)
{
	setLitters(litters);
	setCityTax(cityTax);
}

NonAlcoholic::NonAlcoholic(std::string name, std::string type, float price, unsigned int quantity, double litters) : Drinks(name, type, price, quantity)
{
	setLitters(litters);
	this->cityTax = getPrice() * 0.05;// 5% from price 
}
void NonAlcoholic::calculatePrice(void) // Quantity * Price + CityTax
{
	double calculate = getQuantity() * (getPrice() + getCityTax());
	std::cout << calculate << std::endl;
}

double NonAlcoholic::calculatePriceWithParam(double getPrice) // Quantity * Price + CityTax
{
	double calculate = getQuantity() * (this->getPrice() + getCityTax());
	std::cout << calculate << std::endl;
	return calculate;

}
void NonAlcoholic::printDrinks(void) const
{
	Drinks::printDrinks();
	std::cout << "Litters: " << litters << " City Tax: " << cityTax << std::endl;
}

void NonAlcoholic::setLitters(double litters)
{
	this->litters = litters;
}

double NonAlcoholic::getLitters(void) const
{
	return this->litters;
}

void NonAlcoholic::setCityTax(double cityTax)
{
	this->cityTax = cityTax;
}

double NonAlcoholic::getCityTax(void) const
{
	return this->cityTax;
}

NonAlcoholic::~NonAlcoholic()
{
}
