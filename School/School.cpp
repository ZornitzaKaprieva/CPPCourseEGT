#include "School.h"
#include<vector>


School::School()
{
}

School::School(string name)
{
	this->schoolName = name;
}

int School::setClassesNum()
{
	School s;
	int num;
	s.setSchoolName(this->schoolName);
	cout << "How many classes are there in the school?: "; //cout << "How many classes are there in " << s.getSchoolName() << endl; //не показва името
	cin >> num;
	return num;
}

//TODO: за всеки клас -> име на класа + брой ученици + информация за учениците + брой учители + информация за учителите (+ дисциплина + информация за дисциплината;

void School::fillClassesInSchool()
{
	School s;
	int size = s.setClassesNum();
	for (int i = 0; i < size; i++)
	{
		cout << "This is void School::fillClassesInSchool()" << endl;
		vector<Student> students;
		vector<Teacher> teachers;
		vector<Class> classes;
		/* TODO:
			c2.setClassName2();
			cout << c2.getClassID() << endl;
			c2.fillStudentsInClass(students);
			c2.fillTeachersInClass(teachers);
			c2.printStudentsList(students);
			c2.printTeachersList(teachers); ;*/
	}
}


void School::setSchoolName(string name)
{
	this->schoolName = name;
}

string School::getSchoolName()
{
	return this->schoolName;
}