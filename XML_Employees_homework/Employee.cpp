#pragma once

#include "Employee.h"


std::ostream& operator<<(std::ostream& os, const Employee& employee)
{
	os << "Name: " << employee.name << " / Type: " << employee.type << " / Age: " << employee.age << " / Workstation: " << employee.workstation << std::endl;
	return os;
}

Employee::Employee(std::string name, std::string type, int age, Workstation workstation) : workstation(workstation)
{
	setName(name);
	setType(type);
	setAge(age);
}

Employee::Employee(std::string name, std::string type, int age, Workstation* workstation) : workstation(*workstation)
{
	setName(name);
	setType(type);
	setAge(age);
}

void Employee::createEmployeeNode(pugi::xml_node& employeeNode, Employee employee)
{
	// add attributes to Employee node
	employeeNode.append_attribute("Name:") = employee.getName().data();
	employeeNode.append_attribute("Type") = employee.getType().data();
	employeeNode.append_attribute("Age") = employee.getAge();

	// append Workstation node as Employee node child
	pugi::xml_node workstationNode = employeeNode.append_child("Workstation");

	// create Workstation node using Workstation object
	Workstation::createWorkstationNode, employee.getWorkstation();
}

Employee *Employee::parseEmployeeNode(pugi::xml_node employee)
{
	// read attributes values from Employee node
	std::string name = employee.attribute("Name").value();
	std::string type = employee.attribute("Type").value();
	int age = employee.attribute("Age").as_int();

	// invoke Workstation::parseWorkstation() to read Workstation node (the Author node data is used to create an Author object)
	Workstation* workstation = Workstation::parseWorkstationNode(employee.child("Workstation"));

	// create Book object
	return new Employee(name, type, age, workstation);
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

Workstation Employee::getWorkstation() const
{
	return workstation;
}

Employee::~Employee()
{

}


