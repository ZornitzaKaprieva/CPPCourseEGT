#include "Teacher.h"

Teacher::Teacher()
{}

Teacher::Teacher(string name, string title, Discipline& discipline) : discipline(discipline) //не е съвсем ясно
{
	this->teacherName = name;
	this->teacherTitle = title;
}

int Teacher::teacherListSize()
{
	int size;
	cout << "Enter teacher list size: ";
	cin >> size;
	return size;
}

void Teacher::fillTeacherList(vector<Teacher>& teachers)
{
	Teacher t;
	int size = t.teacherListSize();
	for (int i = 0; i < size; i++)
	{
		Teacher teacher;
		teacher.setTeacherVInfo();
		teachers.push_back(teacher);
	}
}

Teacher Teacher::setTeacherVInfo()
{
	string teacherName;
	string teacherTitle;
	Discipline discipline;

	cout << "Teacher name: ";
	getline(cin >> ws, teacherName);
	cout << "Teacher title: ";
	getline(cin >> ws, teacherTitle);
	//cout << "Set Disciplines: \n";
	discipline.setDisciplineInfo();
	cout << endl;

	this->teacherName = teacherName;
	this->teacherTitle = teacherTitle;
	this->discipline = discipline;


	Teacher newTeacher(teacherName, teacherTitle, discipline);
	return newTeacher;
}

void Teacher::printTeachersList(vector<Teacher>& teachers)
{
	cout << "Teacher list: " << endl;
	for (int i = 0; i < teachers.size(); i++)
	{
		teachers.at(i).printTeacherInfo();
	}
}

void Teacher::printTeacherInfo()
{
	cout << getTeacherTitle() << " " << getTeacherName();
	this->discipline.printDisciplineInfo();
}

void Teacher::setTeacherName(string name)
{
	this->teacherName = name;
}

string Teacher::getTeacherName()
{
	return this->teacherName;
}
void Teacher::setTeacherTitle(string title)
{
	this->teacherTitle = title;
}

string Teacher::getTeacherTitle()
{
	return this->teacherTitle;
}

