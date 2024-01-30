#include "Drinks.h"
using std::cout;
using std::endl;

Drinks::Drinks(std::string name = "Add name", std::string type = "Add type", float price = 0.0F, unsigned int quantity = 0) //инициалзирането не влияе ли  вконструктора
{
	setName(name);
	setType(type);
	setPrice(price);
	setQuantity(quantity);
}

void Drinks::printDrinks(void) const
{
	cout << getName() << ", " << getType() << " PRICE BGN:" << getPrice() << " Quantity: " << getQuantity() << " ";
}

void Drinks::setName(std::string name)
{
	this->name = name;
}

std::string Drinks::getName(void) const
{
	return this->name;
}

void Drinks::setType(std::string type)
{
	this->type = type;
}

std::string Drinks::getType(void) const
{
	return this->type;
}

void Drinks::setPrice(float price)
{
	this->price = price;
}

float Drinks::getPrice(void) const
{
	return this->price;
}

void Drinks::setQuantity(int quantity)
{
	this->quantity = quantity;
}

unsigned int Drinks::getQuantity(void) const
{
	return this->quantity;
}