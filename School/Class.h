#pragma once

#include"Student.h"
#include "Teacher.h"

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Class
{
public:
	Class();
	Class(string);
	int setClassSize();
	int setTeachersTeam();
	
	void fillTeachersAndStudentsInClass(vector<Student>&, vector<Teacher>&);
	void printStudentsAnTeachersList(vector<Student>&, vector<Teacher>&);
	
	void fillStudentsInClass(vector<Student>&);
	void fillTeachersInClass(vector<Teacher>&);
	void printStudentsList(vector<Student>&);
	void printTeachersList(vector<Teacher>&);

	string setClassName2(); ///new
	void setClassID(string);
	string getClassID();
	

	

private:
	string classID;
};
