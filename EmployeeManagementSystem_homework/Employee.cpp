#include "Employee.h"
#include <iostream>
using namespace std;


Employee::Employee(std::string _name, int _id, std::string _position)
{
	setName(_name);
	setEmployeeID(_id);
	setPosition(_position);
}

void Employee::setName(std::string _name) //Employee name should be more than 2 characters
{
	while (_name.length() < 2)
	{
		cout << "Enter more than 2 characters for name!\n";
		cout << "Name: ";
		getline(cin >> ws, _name);
	}

	this->name = _name;
}

std::string Employee::getName(void) const
{
	return this->name;
}

void Employee::setEmployeeID(int _id)
{
	while (_id <= 0)
	{
		cout << "Enter a positive number for member ID!\n";
		cout << "Member ID: ";
		cin >> _id;
	}

	this->employeeID = _id;
}

int Employee::getEmployeeID(void) const
{
	return this->employeeID;
}

void Employee::setPosition(std::string _position)  //Position should be more than 2 characters
{
	while (_position.length() < 2)
	{
		cout << "Enter more than 2 characters for position!\n";
		cout << "Position: ";
		getline(cin >> ws, _position);
	}

	this->position = _position;
}

std::string Employee::getPosition(void) const
{
	return this->position;
}

void Employee::display(void) const // print empoloyee info
{
	cout << "Name: " << getName() << "\n"
		<< "ID: " << getEmployeeID() << "\n"
		<< "Position: " << getPosition() << endl;
	cout << endl;
}

Employee::~Employee()
{
}
