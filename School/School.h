#pragma once

#include"Student.h"
#include"Class.h"

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class School
{
public:
	School();
	//School(string);
	int setClassesNum();
	void fillSchoolList(vector<Class>&);
	Class setClassVInfo();
	void printClassesList(vector<Class>&);
	//void setSchoolName(string);
	//string getSchoolName();
private:
	//string schoolName;
};

