#include "Class.h"

Class::Class()
{
}

Class::Class(string id)
{
	this->classID = id;
}

int Class::setClassSize()
{
	int size;
	cout << "Size of the class: ";
	cin >> size;
	return size;
}

string Class::setClassName2() 
{
	string id;
	cout << "Class ID: ";
	cin >> id;
	this->classID = id;
	return id;
}

int Class::setTeachersTeam()
{
	int size;
	cout << "Size of the teacher team: ";
	cin >> size;
	return size;
}

void Class::fillTeachersAndStudentsInClass(vector<Student>& students, vector<Teacher>& teachers)
{
	int sizeClass = setClassSize();
	for (int i = 0; i < sizeClass; i++)
	{
		Student newStudent;
		newStudent.setStudentInfo();
		students.push_back(newStudent);


	}
	int sizeTeacherTeam = setTeachersTeam();
	for (int i = 0; i < sizeTeacherTeam; i++)
	{

		Teacher newTeacher;
		newTeacher.setTeacherVInfo();
		teachers.push_back(newTeacher);

	}
	cout << endl;
}

void Class::fillStudentsInClass(vector<Student>& students)
{
	int sizeClass = setClassSize();
	for (int i = 0; i < sizeClass; i++)
	{
		Student newStudent;
		newStudent.setStudentInfo();
		students.push_back(newStudent);
	}
	
	cout << endl;
}
void Class::fillTeachersInClass(vector<Teacher>& teachers)
{

	int sizeTeacherTeam = setTeachersTeam();
	for (int i = 0; i < sizeTeacherTeam; i++)
	{

		Teacher newTeacher;
		newTeacher.setTeacherVInfo();
		teachers.push_back(newTeacher);

	}
	cout << endl;
}

void Class::printStudentsAnTeachersList(vector<Student>& students, vector<Teacher>& teachers)
{
	cout << this->classID << endl;
	cout << endl << this->classID << " Student List: " << endl;
	for (int i = 0; i < students.size(); i++)
	{
		students.at(i).printStudentInfo();
	}
	cout << endl;
	cout << this->classID << " Teachers List: " << endl;
	for (int i = 0; i < teachers.size(); i++)
	{
		teachers.at(i).printTeacherInfo();
	}

	cout << "............." << endl;
	cout << endl;
}

void Class::printStudentsList(vector<Student>& students)
{
	cout << this->classID << endl;
	cout << endl << this->classID << " Student List: " << endl;
	for (int i = 0; i < students.size(); i++)
	{
		students.at(i).printStudentInfo();
	}
	cout << endl;
}

void Class::printTeachersList(vector<Teacher>& teachers)
{
	cout << this->classID << " Teachers List: " << endl;
	for (int i = 0; i < teachers.size(); i++)
	{
		teachers.at(i).printTeacherInfo();
	}

	cout << "............." << endl;
	cout << endl;
}

void Class::setClassID(string id)
{
	this->classID = id;
}

string Class::getClassID()
{
	return this->classID;
}