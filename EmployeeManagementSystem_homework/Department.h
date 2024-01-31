#pragma once

#include"Employee.h"
#include<string>
#include<vector>

class Department
{
public:
    Department(std::string);  //constructor with parameters
    void setName(std::string);  //setter for name
    std::string getName(void) const;  //getter for name
    void addEmployee(Employee*); // add an employee to the department
    void displayEmployees(); // list all employees in the department 
    ~Department(); //destructor
private:
    std::string departmentName;
    std::vector<Employee*> employeeList; // Vectors will be used, not arrays, because the exact number of elements is not known.
    int numEmployees; //int to keep track of the number of employees
};

