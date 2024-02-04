#include "Drinks.h"
#include "Alcoholic.h"
#include "NonAlcoholic.h"
#include "Purchase.h"
#include "User.h"
#include <iostream>
#include <string>
#include <map>
using std::cout;
using std::endl;

int main()
{
	Drinks* d1 = new Alcoholic("Absolut", "vodka", 20.50, 2, 0.7, 1.5); //name, type, price, quantity, volume, tax
	Drinks* d2 = new Alcoholic("J&B", "scotch", 50, 3, 0.7); //name, type, price, quantity, volume, (without tax)
	Drinks* d3 = new NonAlcoholic("Cappy", "juice", 2.50, 4, 2.0, 0.5); //name, type, price, quantity, litters, cityTax
	Drinks* d4 = new NonAlcoholic("Florina", "juice", 2.0, 5, 1.0); //name, type, price, quantity, litters, (without cityTax)
	Drinks* d5 = new Alcoholic("Baileys", "liqueur", 30.50, 1, 0.5); //(without tax)
	Drinks* d6 = new NonAlcoholic("Gorna Banya", "water", 1.5, 10, 1.5); // (without cityTax)

	/*cout << "Print info for single drink: " << endl;
	d1->printDrinks();
	d1->calculatePrice();
	cout << "..........................." << endl;*/

	//int overallPurchaseQty = 0;
	std::vector<Drinks*> drinksPurchased;
	drinksPurchased.push_back(d2);
	//overallPurchaseQty += d2->getQuantity();
	drinksPurchased.push_back(d4);
	/*overallPurchaseQty += d4->getQuantity();
	cout << "overallPurchaseQty: " << overallPurchaseQty << endl;*/


	std::vector<Drinks*> drinksPurchased2;
	drinksPurchased2.push_back(d5);
	drinksPurchased2.push_back(d6);


	std::vector<Drinks*> drinksPurchased3;
	drinksPurchased3.push_back(d1);
	drinksPurchased3.push_back(d3);

	Purchase* p1 = new Purchase({d2, d4}, "30.01.2024");
	Purchase* p2 = new Purchase(drinksPurchased2, "01.02.2024");
	Purchase* p3 = new Purchase(drinksPurchased3, "02.02.2024");
	Purchase* p4 = new Purchase(drinksPurchased, "22.02.2024");
	//p1->getPurchasedDrinks(drinks);
	//p1->getDrinksPrice();
	/*p1->printPurchase();
	p2->printPurchase();*/
	
	std::vector<Purchase*> listOfPurchases;
	listOfPurchases.push_back(p1);
	listOfPurchases.push_back(p2);

	std::vector<Purchase*> listOfPurchases2;
	listOfPurchases2.push_back(p3);
	listOfPurchases2.push_back(p4);

	/*cout << "p1->getDrinksPrice(drinksPurchased);" << endl;
	p1->getDrinksPrice(drinksPurchased);*/


	User u1("Zornitza", {p1, p2});
	User u2("Maria", listOfPurchases2); 

	/*u1.getAllPurchases(listOfPurchases);
	u1.printClientInfo();
	u2.printClientInfo();*/

	std::vector<User> users;
	users.push_back(u1);
	users.push_back(u2);

	for (unsigned int i = 0; i < users.size(); i++)
	{
		users.at(i).printClientInfo();

	}

}
