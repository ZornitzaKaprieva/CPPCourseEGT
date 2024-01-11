#pragma once

#include "Discipline.h"

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Teacher
{
public:
	
	Teacher();
	Teacher(string, string, Discipline&);//We operate with the Discipline object. There will be an object created in main - discipline. To pass it to the other class, we need to cast the object. As a pseudonym
	void printTeacherInfo();
	void setTeacherName(string);
	string getTeacherName();
	void setTeacherTitle(string);
	string getTeacherTitle();

	int teacherListSize();
	void fillTeacherList(vector<Teacher>&);
	Teacher setTeacherVInfo();
	void printTeachersList(vector<Teacher>&);
private:
	string teacherName;
	string teacherTitle;
	Discipline discipline; //It will become an object and connect to the teacher: the teacher has a discipline that teaches.
};

