#pragma once

#include <vector>
#include "Alcoholic.h"
#include "NonAlcoholic.h"

class Purchase
{
public:
	Purchase(std::vector<Drinks*>, std::string);

	void setDate(std::string);
	std::string getDate() const;
	void getPurchasedDrinks(std::vector<Drinks*>); // It is now a separate function above the main.

	double calculateTotalPrice();
	void   printPurchase();
private:
	std::string date;
	std::vector<Drinks*> drinks;
	//напитки, дата, крайна сума

};

