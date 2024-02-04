#include "User.h"
#include<iostream>

User::User(std::string userName, std::vector<Purchase*> listOfPurchases)
{
	setUserName(userName);
	this->listOfPurchases = listOfPurchases;
}

void User::setUserName(std::string userName)
{
	this->username = userName;
}
std::string User::getUserName(void) const
{
	return this->username;
}
void User::getAllPurchases(std::vector<Purchase*> listOfPurchases)
{
	for (unsigned int i = 0; i < listOfPurchases.size(); i++)
	{
		listOfPurchases.at(i)->printPurchase();
	}
}


void User::printClientInfo()
{
	std::cout << getUserName() << ":\n";
	getAllPurchases(this->listOfPurchases);
}

//void User::getTotalPrice(std::vector<Purchase*> listOfPurchases) const
//{
//	//std::vector<Purchase*> listOfPurchases;
//	for (unsigned int i = 0; i < listOfPurchases.size(); i++)
//	{
//		listOfPurchases.at(i)->getDrinksPrice();
//	}
	
//}
