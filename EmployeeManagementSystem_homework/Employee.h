#pragma once

# include<string>

class Employee
{
public:
    Employee(std::string, int, std::string); //constructor with parameters
	void setName(std::string); //setter for name
	std::string getName(void) const; //getter for name
	void setEmployeeID(int); //setter for employee D
	int getEmployeeID(void) const; //getter for employee ID
	void setPosition(std::string);//setter for position
	std::string getPosition(void) const; //getter for position
	void display(void) const; //display info for employee
    ~Employee();//destructor
private:
    std::string name;
    int employeeID;
    std::string position;
};

