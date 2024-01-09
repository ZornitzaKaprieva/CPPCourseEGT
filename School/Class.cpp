#include "Class.h"

int Class::setClassSize()
{
	int size;
	cout << "Size of the class: ";
	cin >> size;
	return size;
}
void Class::fillClass(vector<Student>& students)
{
	StudentList s;
	int size = setClassSize();
	for (int i = 0; i < size; i++)
	{
		Student newStudent = s.setVectorInfo();
		students.push_back(newStudent);
	}
	cout << endl;
}
Student Class::setStudentVInfo()
{
	string studentName;
	int studentID;
	cout << "Student Name: ";
	getline(cin >> ws, studentName);
	cout << "Student ID: ";
	cin >> studentID;

	Student newStudent(studentName, studentID);

	return newStudent;

}
void Class::printStudentList(vector<Student>& students)
{
	cout <<this->classID << " Student List: " << endl;
	for (int i = 0; i < students.size(); i++)
	{
		students.at(i).printStudentInfo();
	}
	cout << endl;
}
Class::Class(string id)
{
	this->classID = id;
}

void Class::setClassID(string id)
{
	this->classID = id;
}

string Class::getClassID() 
{
	return this->classID;
}
