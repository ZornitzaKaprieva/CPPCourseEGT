#pragma once

#include<string>
#include<iostream>
#include"Workstation.h"
#include <ostream>
#include "pugixml.h"


class Employee
{

	friend std::ostream& operator<<(std::ostream& os, const Employee& employee);

public:

	Employee(std::string name, std::string type, int age, Workstation workstation);
	Employee(std::string name, std::string type, int age, Workstation* workstation);

	static void createEmployeeNode(pugi::xml_node& employeeNode, Employee employee);
	static Employee *parseEmployeeNode(pugi::xml_node employee);

	Workstation getWorkstation() const;

	void setName(std::string name);
	void setType(std::string type);
	void setAge(int age);
	std::string getName();
	std::string getType();
	int getAge();

	~Employee();

private:
	std::string name;
	std::string type;
	int age;
	Workstation workstation;

};