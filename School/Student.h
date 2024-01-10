#pragma once

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Student
{
public:
	Student();
	Student(string, int);
	void setStudentName(string);
	void setStudentID(int);
	string getStudentName();
	int getStudentID() const;
	Student setStudentInfo();
	void printStudentInfo();
private:
	string studentName;
	int studentID;
};

