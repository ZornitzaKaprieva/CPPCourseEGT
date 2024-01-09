#pragma once

#include"Student.h"
#include "StudentList.h"

#include<iostream>
#include<string>
using namespace std;

class Class
{
public:
	Class();
	Class(string);
	int setClassSize();
	void fillClass(vector<Student>&);
	Student setStudentVInfo();
	void printStudentList(vector<Student>&);
	void setClassID(string);
	string getClassID();

private:
	string classID;
};

