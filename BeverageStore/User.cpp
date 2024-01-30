#include "User.h"

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
}

void User::printClientInfo()
{
}