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
	User(std::string, std::vector<Purchase>&);
private:
	std::string username;
	std::vector<Purchase> listOfPurchase;// списък / вектор от поръчки
};

