#include "School.h"
#include"Student.h"
#include"Class.h"
#include"Teacher.h"
#include"Discipline.h"

#include<vector>
using namespace std;

/*We are given a school. In the school there are classes of students. Each class has a set of teachers. Each teacher teaches a set of disciplines.
Students have name and unique class number. Classes have unique text identifier. Teachers have name and title. Disciplines have name, number of lectures and number of exercises.
Define C++ classes for the school (School, Class, Student, Teacher, Discipline).
Keep the member fields private. Add constructors and accessor methods. Write a testing class to construct and print a sample school.*/

int main()
{


	Student s1("Zornitza Kaprieva", 1111);
	Student s2("Maria Ivanova", 1112);
	vector<Student> firstA;
	firstA.push_back(s1);
	firstA.push_back(s2);
	for (int i = 0; i < firstA.size(); i++)
	{
		firstA.at(i).printStudentInfo();

	}

	cout << "........" << endl;
	Discipline d1("Math", 15, 30);
	Discipline d2("History", 25, 50);
	Discipline d3("Literature", 25, 50);
	//d2.printDisciplineInfo();
	cout << "........" << endl;
	Teacher t1("Mr.", "Ivan Georgiev", d1);
	Teacher t2("Mrs.", "Maria Petrova", d2);
	Teacher t3("Mr.", "Georigi Ivanov", d3);
	vector<Teacher> firstATeacher;
	firstATeacher.push_back(t1);
	firstATeacher.push_back(t2);
	firstATeacher.push_back(t3);
	for (int i = 0; i < firstATeacher.size(); i++)
	{
		firstATeacher.at(i).printTeacherInfo();

	}
	cout << "........" << endl;

	Class c1("IA class");
	Class c2("IB class");
	vector<Student> students;

	cout << c1.getClassID() << endl;
	c1.fillClass(students);
	cout << c2.getClassID() << endl;
	c2.fillClass(students);

	c1.printStudentList(students);
	c2.printStudentList(students);

	School classes;





	return 0;
}