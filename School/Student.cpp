#include "Student.h"

Student::Student(string name, int id)
{
	setStudentName(name);
	setStudentID(id);
}

void Student::printStudentInfo()
{
	cout << "Student " << getStudentID() << ": " << getStudentName() << endl;
}

void Student::setStudentName(string name) 
{
	this->studentName = name;
}

void Student::setStudentID(int id) 
{
	this->studentID = id;
}

string Student::getStudentName()
{
	return this->studentName;
}
int Student::getStudentID() const
{
	return this->studentID;
}