#include "Alcoholic.h"

Alcoholic::Alcoholic(std::string name, std::string type, float price, unsigned int quantity, double volume, double tax) : Drinks(name, type, price, quantity)
{
	setVolume(volume);
	setTax(tax);

}

Alcoholic::Alcoholic(std::string name, std::string type, float price, unsigned int quantity, double volume) : Drinks(name, type, price, quantity)
{
	setVolume(volume);
	this->tax = getPrice() * 0.12;// 12% from price 
}
void Alcoholic::calculatePrice(void) // Quantity * (Price  * Tax)
{
	double calculate = this->getQuantity() * (this->getPrice() * this->getTax());
	std::cout << calculate << std::endl;

}

double Alcoholic::calculatePriceWithParam(double getPrice) // Quantity * (Price  * Tax)
{
	double calculate = this->getQuantity() * (this->getPrice() * this->getTax());
	std::cout << calculate << std::endl;
	return calculate;

}
void Alcoholic::printDrinks(void) const
{
	Drinks::printDrinks();
	std::cout << "Volume: " << getVolume() << " TAX: " << getTax() << std::endl;;
}

void Alcoholic::setVolume(double volume)
{
	this->volume = volume;
}

double Alcoholic::getVolume(void) const
{
	return this->volume;
}

void Alcoholic::setTax(double tax)
{
	//tax = getPrice() * 0.12;//12% from price 
	this->tax = tax;
}

double Alcoholic::getTax(void) const
{
	return this->tax;
}

Alcoholic::~Alcoholic()
{
}
