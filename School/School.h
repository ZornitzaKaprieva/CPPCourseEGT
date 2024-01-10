#pragma once

#include"Class.h"
#include "School.h"
#include"Student.h"
#include"Class.h"
#include"Teacher.h"
#include"Discipline.h"

class School
{
public:
	School();
	School(string);
	int setClassesNum();
	void setSchoolName(string);
	string getSchoolName();
	void fillClassesInSchool();//todo

private:
	string schoolName;

};

