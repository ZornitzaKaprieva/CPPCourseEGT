#include<iostream>
#include"pugixml.h"
using namespace std;
using namespace pugi; // за да не викаме всеки път pugi::...

int main()
{
	xml_document doc; //парсваме xml тук, имаме достъп до всички тагове

	//отваряме xml file:

	if (!doc.load_file("employees.xml")) return -1;

	//kato node връщаме тази колекция, в случая employees
	xml_node empls = doc.child("EmployeesData").child("Employees"); //изкарвааме от doc child-овете

	//обхождането става с итератор
	for (xml_node_iterator it = empls.begin(); it != empls.end(); ++it)
	{
		cout << "Employee" << endl;
		//сега проверяваме атрибутите (връзваме го за горната итерация
		for (xml_attribute_iterator ait = it->attributes_begin(); ait != it->attributes_end(); ++ait)
		{
			cout << " " << ait->name() << " = " << ait->value();
		}
		cout << endl;

	}
	return 0;
}