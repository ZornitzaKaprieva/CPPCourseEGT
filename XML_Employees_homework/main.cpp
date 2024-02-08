#include<iostream>
#include"pugixml.h"
using namespace std;
using namespace pugi; // �� �� �� ������ ����� ��� pugi::...

int main()
{
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

	}
	return 0;
}