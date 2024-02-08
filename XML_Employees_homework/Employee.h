#pragma once

#include<string>
#include<iostream>

class Employee {
public:

	Employee(std::string, std::string, int);
	void print() const;
	void setName(std::string);
	void setType(std::string);
	void setAge(int);
	std::string getName();
	std::string getType();
	int getAge();
	~Employee();
private:
	std::string name;
	std::string type;
	int age;

};