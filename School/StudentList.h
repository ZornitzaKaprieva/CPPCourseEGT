#pragma once
#include"Student.h"

class StudentList
{
public:
	int setClassSize();
	void fillClass(vector<Student>&);
	Student setVectorInfo();
	void printStudentList(vector<Student>&);
};

