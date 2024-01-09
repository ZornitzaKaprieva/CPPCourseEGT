#pragma once

#include<iostream>
#include<string>
using namespace std;

class Discipline
{
public:
	Discipline();
	Discipline(string, int, int);
	void printDisciplineInfo();
	void setDisciplineName(string);
	string getDisciplineName() const;
	void setLecturesCount(int);
	int getLecturesCount() const;
	void setExercisesCount(int);
	int getExercisesCount() const;
private:
	string disciplineName;
	int lecturesCount;
	int exercisesCount;
};

