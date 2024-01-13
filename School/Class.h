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
	Class(string, Student&, Teacher&);
	int setClassSize();
	int setTeachersTeam();
	
	void fillTeachersAndStudentsInClass(vector<Student>&, vector<Teacher>&);
	void printStudentsAndTeachersList(vector<Student>&, vector<Teacher>&); 
	
	void fillStudentsInClass(vector<Student>&);
	void fillTeachersInClass(vector<Teacher>&);
	void printStudentsList(vector<Student>&);
	void printTeachersList(vector<Teacher>&);
	

	void setClassID(string);
	string setClassName1(string);
	Class setClassName2();
	string getClassID();

	Class setClassVInfo(); // string, vector<Student>&, vector<Teacher>& //=> void printClassStudentsAndTeachersList(string, vector<Student>&, vector<Teacher>&); //new
	void fillClassList(vector<Class>&); //new
	void printClassNameInfo(); 
	
private:
	string classID;
	Student students;
	Teacher teachers;

};
