#include "School.h"
#include"Student.h"
#include"Class.h"
#include"Teacher.h"
#include"Discipline.h"
using namespace std;

int main()
{

	//ok: Student, Class, Teacher, Discipline
	//Class c1("IA class");
	//Class c2("IB class");
	//vector<Student> students;
	//vector<Teacher> teachers;
	//cout << c1.getClassID() << endl;
	//c1.fillTeachersAndStudentsInClass(students, teachers);
	//c2.setClassName2();
	//cout << c2.getClassID() << endl;
	//c2.fillStudentsInClass(students); //c2.fillTeachersAndStudentsInClass(students, teachers);
	//c2.fillTeachersInClass(teachers); //c2.fillTeachersAndStudentsInClass(students, teachers);
	//c1.printStudentsAnTeachersList(students, teachers);
	//c2.printStudentsList(students); //c2.printStudentsAnTeachersList(students, teachers);
	//c2.printTeachersList(teachers); //c2.printStudentsAnTeachersList(students, teachers);
	//cout << "............................." << endl;

	//todo: School
	School sch("138SUZIE");
	cout << sch.getSchoolName() << endl;
	string className;
	vector<Student> ss;
	vector<Teacher> tt;
	vector<Class> cc;
	sch.getSchoolName();
	sch.fillClassesWithTeachersAndStudents(cc, ss, tt); //ok
	//sch.fillClassesInSchool(className, ss, tt); //ok, но без името на класа
	sch.printClassStudentsAnTeachersList(cc, ss, tt); //todo (принтира учениците от всички класове в един списък (вектор от клас би могло да помогне)
	
	//SOME TESTS:
	//Student s1("Zornitza Kaprieva", 1111);
	//Student s2("Maria Ivanova", 1112);
	//vector<Student> firstA;
	//firstA.push_back(s1);
	//firstA.push_back(s2);
	//for (int i = 0; i < firstA.size(); i++)
	//{
	//	firstA.at(i).printStudentInfo();

	//}

	//cout << "........" << endl;
	//Discipline d1("Math", 15, 30);
	//Discipline d2("History", 25, 50);
	////d2.printDisciplineInfo();
	//Discipline d3;
	//d3.setDisciplineInfo();
	////d3.printDisciplineInfo();
	//cout << "........" << endl;
	//cout << "........" << endl;
	//Teacher t1("Mr.", "Ivan Georgiev", d1);
	//Teacher t2("Mrs.", "Maria Petrova", d2);
	//Teacher t3("Mr.", "Georigi Ivanov", d3);
	//vector<Teacher> firstATeacher;
	//firstATeacher.push_back(t1);
	//firstATeacher.push_back(t2);
	//firstATeacher.push_back(t3);
	//for (int i = 0; i < firstATeacher.size(); i++)
	//{
	//	firstATeacher.at(i).printTeacherInfo();
	//}
	//cout << "........" << endl;

	return 0;
}