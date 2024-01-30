/*Create a drink shop project.
* For each drink there is the following information: name of the drink, price of the drink, quantity of the drink ordered, type of drink (wine, gin, whiskey, water, juice, iced tea, …)
Create a function that can print the drink information.

* There are two types of drinks in the store: alcoholic and non-alcoholic.
- Alcoholic beverages have additional variables: volume and tax.
Their price is determined by the following formula: CalculatePrice() > Quantity * (Price * Tax).
- Non-Alcoholic beverages have additional variables: liters and city tax.
Their price is determined by the following formula: CalculatePrice() -> Quantity * Price + CityTax.

* Create an order class that displays the drinks ordered, the date, and the final amount of the order.
* Create a user class that has a username, a list/vector of orders
* Create a method to display information about how many drinks of each type were sold.
* Create a method that returns the best customer/customers (with the most expensive order).
*Create a method that returns all customers with orders containing a drink of a given type.
* Create a method that returns the 10 customers with orders containing a drink of a given type with an order turnover above a given amount.*/

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
	Drinks* d2 = new Alcoholic("J&B", "scotch", 50, 3, 0.7); //name, type, price, quantity, volume, (without tax)
	Drinks* d3 = new NonAlcoholic("Cappy", "juice", 2.50, 4, 2.0, 0.5); //name, type, price, quantity, litters, cityTax
	Drinks* d4 = new NonAlcoholic("Florina", "juice", 2.0, 5, 1.0); //name, type, price, quantity, litters, (without cityTax)
	
	Drinks* d5 = new Alcoholic("Baileys", "liqueur", 30.50, 1, 0.5); //(without tax)
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
	Purchase p2(drinks2, "01.02.2024");
	//p1.getPurchasedDrinks(drinks);
	p1.printPurchase();
	p2.printPurchase();	

	std::vector<Purchase*> listOfPurchases;
	/*listOfPurchases.push_back(p1);
	listOfPurchases.push_back(p2);*/

	User u1("Zornitza", listOfPurchases); //todo

}
