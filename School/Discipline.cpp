#include "Discipline.h"

Discipline::Discipline()
{
}

Discipline::Discipline(string _disciplineName, int _lecturesCount, int _exercisesCount)
{
	this->disciplineName = _disciplineName;
	this->lecturesCount = _lecturesCount;
	this->exercisesCount = _exercisesCount;
}

void Discipline::printDisciplineInfo()
{
	cout << "Discipline: " << getDisciplineName() << "; Lectures: " << getLecturesCount() << "; Exercises: " << getExercisesCount() << endl;
}

void Discipline::setDisciplineName(string _disciplineName)
{
	this->disciplineName = _disciplineName;
}

string Discipline::getDisciplineName() const
{
	return this->disciplineName;
}

void Discipline::setLecturesCount(int _lecturesCount)
{
	this->lecturesCount = _lecturesCount;
}

int Discipline::getLecturesCount() const
{
	return this->lecturesCount;
}

void Discipline::setExercisesCount(int _exercisesCount)
{
	this->exercisesCount = _exercisesCount;
}

int Discipline::getExercisesCount() const
{
	return this->exercisesCount;
}
