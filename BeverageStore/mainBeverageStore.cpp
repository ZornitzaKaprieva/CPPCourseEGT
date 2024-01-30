
#include "Drinks.h"
#include "Alcoholic.h"
#include "NonAlcoholic.h"
#include "Purchase.h"
#include "User.h"
#include <iostream>
#include <string>
using std::cout;
using std::endl;

int main()
{

	Drinks* d1 = new Alcoholic("Absolut", "vodka", 20.50, 2, 0.7, 1.5); //name, type, price, quantity, volume, tax
	Drinks* d2 = new Alcoholic("Absolut", "vodka", 10, 3, 0.7); //name, type, price, quantity, volume, (without tax)
	Drinks* d3 = new NonAlcoholic("Cappy", "juice", 2.50, 4, 2.0, 0.5); //name, type, price, quantity, litters, cityTax
	Drinks* d4 = new NonAlcoholic("Florina", "juice", 2.0, 5, 1.0); //name, type, price, quantity, litters, (without cityTax)
	
	Drinks* d5 = new Alcoholic("Baileys ", "liqueur", 30.50, 1, 0.5); //(without tax)
	Drinks* d6 = new NonAlcoholic("Gorna Banya", "water", 1.5, 10, 1.5); // (without cityTax)

	/*cout << "Print info for single drink: " << endl;
	d1->printDrinks();
	d1->calculatePrice();
	d2->printDrinks();
	d2->calculatePrice();
	d3->printDrinks();
	d3->calculatePrice();
	d4->printDrinks();
	d4->calculatePrice();
	cout << "..........................." << endl;*/

	std::vector<Drinks*> drinks;
	drinks.push_back(d2);
	drinks.push_back(d4);
	
	std::vector<Drinks*> drinks2;
	drinks2.push_back(d5);
	drinks2.push_back(d6);

	Purchase p1(drinks, "30.01.2024");
	p1.printPurchase();
	//p1.getPurchasedDrinks(drinks);
}