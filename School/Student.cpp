#include "Student.h"

Student::Student()
{}

Student::Student(string name, int id)
{
	setStudentName(name);
	setStudentID(id);
}

Student Student::setStudentInfo()
{
	string studentName;
	int studentID;
	cout << "Student Name: ";
	getline(cin >> ws, studentName);
	cout << "Student ID: ";
	cin >> studentID;
	cout << endl;
	this->studentName = studentName;
	this->studentID = studentID;

	Student newStudent(studentName, studentID);

	return newStudent;
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
