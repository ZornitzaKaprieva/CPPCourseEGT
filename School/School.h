#pragma once

#include"Class.h"
#include "School.h"
#include"Student.h"
#include"Class.h"
#include"Teacher.h"
#include"Discipline.h"
#include<vector>

class School
{
public:
	School();
	School(string);
	School(string, Class&);
	School(string, Student&, Teacher&);
	int setClassesNum();
	void setSchoolName(string);
	string getSchoolName();
	void fillClassesInSchool(string, vector<Student>&, vector<Teacher>&);
	void printClassesInSchool(string, vector<Student>&, vector<Teacher>&);
	void fillClassesWithTeachersAndStudents(vector<Class>&, vector<Student>&, vector<Teacher>&);
	void printClassStudentsAnTeachersList(vector<Class>&, vector<Student>&, vector<Teacher>&);
private:
	string schoolName;
	int classesNum;
	string className;
	Class classes;
	Teacher teachers;
	Student students;
	vector<Class> classList;
};

