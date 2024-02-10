#include "Company.h"


std::vector<Employee*> Company::employeesList;
std::vector<Employee> Company::newEmployeesList;
pugi::xml_document Company::doc;
pugi::xml_document Company::newDoc;

void Company::deserializeCompanyData()
{
    pugi::xml_node employeesNode = doc.child("EmployeesData").child("Employees");
    for (pugi::xml_node employeesNode = employeesNode.child("Employees"); employeesNode; employeesNode = employeesNode.next_sibling("Employee"))
    {
        // invoke Employee::parseEmployeeNode() to read Employee node (the Employee node data is used to create an Employee object)
        Employee* employee = Employee::parseEmployeeNode(employeesNode);

        // The employee object is added to the employeeList
        Company::employeesList.push_back(employee);
    }
}

void Company::serializeCompanyData()
{
    /**/
}

bool Company::getDocumentFromXML(const char*)
{
	return false;
}

bool Company::saveDocumentToXML(const char* file)
{
    if (!newDoc.save_file(file)) 
        return -1;
}

const std::vector<Employee*> Company::getEmployeesList()
{
    return employeesList;
}

void Company::addEmployeeToNewEmployeesList(Employee employee)
{
    Company::newEmployeesList.push_back(employee);
}

void Company::generateCompanyData() //to free space in main
{
    Workstation w1(2, 3, 5);
    Workstation w2(2, 3, 6);
    Workstation w3(3, 1, 1);

    Employee e1("John", "Part - Time", 23, w1);
    Employee e2("Sean", "Full-Time", 34, w2);
    Employee e3("Sarah", "Part-Time", 55, w3);

    Company::addEmployeeToNewEmployeesList(e1);
    Company::addEmployeeToNewEmployeesList(e2);
    Company::addEmployeeToNewEmployeesList(e2);
}
