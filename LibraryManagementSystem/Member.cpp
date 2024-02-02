#include "Member.h"
#include<iostream>
using namespace std;

Member::Member(std::string _name, int _age, std::string _memberID)
{
	setName(_name);
	setAge(_age);
	setMemberID(_memberID);
}

void Member::setName(std::string _name) //Member name should be more than 2 characters
{
	while (_name.length() < 2)
	{
		cout << "Enter more than 2 characters for name!\n";
		cout << "Name: ";
		getline(cin >> ws, _name);
	}

	this->name = _name;
}

std::string Member::getName(void) const
{
	return this->name;
}

void Member::setAge(int _age)  //Member age should be over 7 yeras old
{
	while (_age < 7)
	{
		cout << "Member should be at least 7 years old!\n";
		cout << "Age: ";
		cin >> _age;
	}
	this->age = _age;
}

int Member::getAge(void) const
{
	return this->age;
}

void Member::setMemberID(std::string _memberID) //Member ID should be 7 characters
{
	while (_memberID.length() != 7)
	{

		cout << "Enter a seven-digit number for member ID: ";
		cin >> _memberID;

		if (_memberID.length() < 7 || _memberID.length() > 7)
		{
			cout << "This ISBN has " << _memberID << " digits." << endl;
		}

	}
	this->memberID = _memberID;
}

std::string Member::getMemberID(void) const
{
	return this->memberID;
}

void Member::display(void) const 
{
	cout << "Name: " << getName() << "\n"
		<< "Age: " << getAge() << "\n"
		<< "Member ID: " << getMemberID() << endl;
	cout << endl;
}

void Member::borrowBook(Book* _book)
{
	Book* borrowedBook = _book;
	cout << getName() << " is borrowing book \"" << borrowedBook->getTitle() << "\"." << endl;
}

Member::~Member()
{
}
