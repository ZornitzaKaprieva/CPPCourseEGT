#pragma once
#include <iostream>
#include <string>
#include <vector>
#include"Purchase.h"

#include "Drinks.h"
#include "NonAlcoholic.h"
#include "Alcoholic.h"

class User
{
public:
	User(std::string, std::vector<Purchase*>);
	void setUserName(std::string);
	std::string getUserName(void) const;
	void getAllPurchases(std::vector<Purchase*>);
	void printClientInfo();
	//void getTotalPrice(std::vector<Purchase*>) const; //new
private:
	std::string username;
	std::vector<Purchase*> listOfPurchases;// списък / вектор от поръчки
};

