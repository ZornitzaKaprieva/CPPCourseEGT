#include "StudentList.h"
#include"Student.h"

int StudentList::setClassSize()
{
	int size;
	cout << "Size of the class: ";
	cin >> size;
	return size;
}
void StudentList::fillClass(vector<Student>& students)
{
	StudentList s;
	int size = setClassSize();
	for (int i = 0; i < size; i++)
	{
		Student newStudent = s.setVectorInfo();
		students.push_back(newStudent);
	}
}
Student StudentList::setVectorInfo()
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
void StudentList::printStudentList(vector<Student>& students)
{
	cout << "StudentList: " << endl;
	for (int i = 0; i < students.size(); i++)
	{
		students.at(i).printStudentInfo();
	}
	cout << endl;
}