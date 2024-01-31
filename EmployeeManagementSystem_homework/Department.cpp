#include "Department.h"
#include <iostream>
using namespace std;


Department::Department(std::string _dName)
{
	setName(_dName);
	this->numEmployees = 0; // set numEmployyes to 0 and increment it by 1 when a new employee is added
}

void Department::setName(std::string _dName) //Department name should be more than 2 characters
{
	while (_dName.length() < 2)
	{
		cout << "Enter more than 2 characters for  Department name!\n";
		cout << "Department Name: ";
		getline(cin >> ws, _dName);
	}
	this->departmentName = _dName;
}

std::string Department::getName(void) const
{
	return this->departmentName;
}

void Department::addEmployee(Employee* employee)
{
	this->employeeList.push_back(employee);
	numEmployees++; //increment employee number by 1. his will later be used in the displayEmployees() function
}

void Department::displayEmployees()
{
	cout << "Department: " << getName() << std::endl;
	cout << endl;
	for (int i = 0; i < this->numEmployees; i++) {
		employeeList.at(i)->display();
	}
}

Department::~Department()
{
}
