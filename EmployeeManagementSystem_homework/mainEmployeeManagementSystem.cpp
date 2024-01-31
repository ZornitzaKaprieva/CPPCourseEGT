
#include "Employee.h"
#include "Department.h"
#include <iostream>
#include <vector>

int main()
{
    // create new Department object:
    Department* d = new Department("IT");

    // create new Employee objects:
    Employee* e1 = new Employee("Georgi", 5656, "Project manager");
    Employee* e2 = new Employee("Zornitza", 1234, "Developer with C++");
    Employee* e3 = new Employee("Maria", 5289, "Developer with Java");
    Employee* e4 = new Employee("Boris", 7890, "QA Manual");
    Employee* e5 = new Employee("Ivan", 4567, "QA Automation");

    // add employees to the employee list:
    d->addEmployee(e1);
    d->addEmployee(e2);
    d->addEmployee(e3);
    d->addEmployee(e4);
    d->addEmployee(e5);

    // display employee list :
    d->displayEmployees();   
}
