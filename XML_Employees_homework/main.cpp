#include"Company.h"

#include<iostream>
#include"pugixml.h"
using namespace std;
using namespace pugi; // �� �� �� ������ ����� ��� pugi::...


int main()
{
	cout << "\nDeserializing company data (employees.xml).....Started\n\n";
	Company::getDocumentFromXML("employees.xml");
	Company::deserializeCompanyData();
	for (const auto b : Company::getEmployeesList()) {
		cout << *b << endl;
	}
	cout << "\nDeserializing company data (employees.xml).....Done\n\n";

	cout << "\nSerializing company data (emplSaveFileOutput.xml)...... Started\n";
	Company::generateCompanyData();
	Company::serializeCompanyData();
	Company::saveDocumentToXML("emplSaveFileOutput.xml");
	cout << "\nSerializing company data (emplSaveFileOutput.xml)...... Done\n\n";
	return 0;

	/*//Without OOP
	xml_document doc; //�������� xml ���, ����� ������ �� ������ ������

	//�������� xml file:

	if (!doc.load_file("employees.xml")) return -1;

	//kato node ������� ���� ��������, � ������ employees
	xml_node empls = doc.child("EmployeesData").child("Employees"); //���������� �� doc child-�����

	//����������� ����� � ��������
	for (xml_node_iterator it = empls.begin(); it != empls.end(); ++it)
	{
		cout << "Employee" << endl;
		//���� ����������� ���������� (�������� �� �� ������� ��������
		for (xml_attribute_iterator ait = it->attributes_begin(); ait != it->attributes_end(); ++ait)
		{
			cout << " " << ait->name() << " = " << ait->value();
		}
		cout << endl;

	}*/
	
	return 0;
}