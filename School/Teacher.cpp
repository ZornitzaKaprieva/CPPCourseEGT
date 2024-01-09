#include "Teacher.h"

Teacher::Teacher(string name, string title, Discipline &discipline): discipline(discipline)
{
	this->teacherName = name;
	this->teacherTitle = title;
}


void Teacher::printTeacherInfo()
{
	cout << "Teacher: " << getTeacherTitle() << " " << getTeacherName() << " - ";
	this->discipline.printDisciplineInfo();
}

void Teacher::setTeacherName(string)
{
}

string Teacher::getTeacherName()
{
	return this->teacherName;
}
void Teacher::setTeacherTitle(string)
{
}

string Teacher::getTeacherTitle()
{
	return this->teacherTitle;
}

