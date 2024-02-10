#pragma once
#include  <vector>
#include <ostream>
#include "Employee.h"

class Company
{
public:
    static void deserializeCompanyData();
    static void serializeCompanyData();

    static bool getDocumentFromXML(const char*);
    static bool saveDocumentToXML(const char*);

    static const std::vector<Employee*> getEmployeesList();
    static void addEmployeeToNewEmployeesList(Employee employee);

    static void generateCompanyData();
private:
    static std::vector<Employee*> employeesList;  // when reading employees from XML
    static std::vector<Employee> newEmployeesList;  // when saving employees in XML
    static pugi::xml_document doc;  // when reading from XML
    static pugi::xml_document newDoc;  // when saving in XML
};

