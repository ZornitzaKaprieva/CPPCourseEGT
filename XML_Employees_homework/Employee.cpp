#pragma once

#include "Employee.h"

Employee::Employee(std::string name, std::string type, int age)
{
	setName(name);
	setType(type);
	setAge(age);
}


void Employee::print() const
{
	std::cout << "Name: " << this->name << " Type: " << this->type << " age: " << this->age;
	std::cout << std::endl;
}

void Employee::setName(std::string name) 
{
	this->name = name;
}

void Employee::setType(std::string type)
{
	this->type = type;
}

void Employee::setAge(int age)
{
	this->age = age;
}
std::string Employee::getName()
{
	return this->name;
}

std::string Employee::getType()
{
	return this->type;
}

int Employee::getAge()
{
	return this->age;
}

Employee::~Employee()
{

}