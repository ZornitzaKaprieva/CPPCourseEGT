#include "Purchase.h"
using std::cout;
using std::endl;

Purchase::Purchase(std::vector<Drinks*> drinks, std::string date)
{
	setDate(date);
	this->drinks = drinks;
}

void Purchase::setDate(std::string date)
{
	this->date = date;
}

std::string Purchase::getDate() const
{
	return this->date;
}

void Purchase::getPurchasedDrinks(std::vector<Drinks*> drinks)
{
	double totalPrice = 0;
	for (int i = 0; i < drinks.size(); i++) // print info + get the price of each drink
	{
		drinks.at(i)->printDrinks();
		totalPrice += drinks.at(i)->calculatePriceWithParam(drinks.at(i)->getPrice());
	}
	cout << "Total price: " << totalPrice << endl;
}


double Purchase::calculateTotalPrice() //todo
{
	return 0.0;
}

void Purchase::printPurchase() //todo
{
	cout << getDate() << ":  ";
	getPurchasedDrinks(this->drinks);
	cout << endl;
}
