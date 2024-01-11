#include "School.h"

School::School()
{
}

School::School(string name)
{
	this->schoolName = name;
}

School::School(string name, Class& classes) : classes(classes)
{
	this->schoolName = name;
}

School::School(string name, Student& students, Teacher& teachers) : students(students), teachers(teachers)
{
	this->schoolName = name;
}

int School::setClassesNum()
{
	School s;
	int num;
	s.setSchoolName(this->schoolName);
	cout << "How many classes are there in the school?: "; //cout << "How many classes are there in " << s.getSchoolName() << endl; //не показва името => друг метод
	cin >> num;
	return num;
}

//TODO: за всеки клас -> име на класа + брой ученици + информация за учениците + брой учители + информация за учителите (+ дисциплина + информация за дисциплината;

//from class void Class::fillTeachersAndStudentsInClass(vector<Student>& students, vector<Teacher>& teachers)
void School::fillClassesWithTeachersAndStudents(vector<Class>& classes, vector<Student>& students, vector<Teacher>& teachers)
{
	School s;
	int countClasses = s.setClassesNum();
	for (int a = 0; a < countClasses; a++)
	{
		Class newClass;
		newClass.setClassName2();
		classes.push_back(newClass);

		int sizeClass = newClass.setClassSize();
		for (int i = 0; i < sizeClass; i++)
		{
			Student newStudent;
			newStudent.setStudentInfo();
			students.push_back(newStudent);
		}

		int sizeTeacherTeam = newClass.setTeachersTeam();
		for (int i = 0; i < sizeTeacherTeam; i++)
		{
			Teacher newTeacher;
			newTeacher.setTeacherVInfo();
			teachers.push_back(newTeacher);
		}
		cout << endl;
	}
}

void School::printClassStudentsAnTeachersList(vector<Class>& classes, vector<Student>& students, vector<Teacher>& teachers)
{
	/*Class c;
	c.getClassID();*/
	//cout << this->classID << endl; //
	cout << endl << "CLASS:" << endl; //cout << endl << this->classID << " Student List: " << endl;
	for (int i = 0; i < classes.size(); i++)
	{
		classes.at(i).printClassNameInfo();
	}

	cout << endl << "STUDENTS LIST: " << endl; //cout << endl << this->classID << " Student List: " << endl;
	for (int i = 0; i < students.size(); i++)
	{
		students.at(i).printStudentInfo();
	}
	cout << endl;
	cout << "TEACHERS LIST: " << endl; //cout << this->classID << "TEACHERS LIST: " << endl;
	for (int i = 0; i < teachers.size(); i++)
	{
		teachers.at(i).printTeacherInfo();
	}

	cout << "............." << endl;
	cout << endl;
}

//ok
void School::fillClassesInSchool(string className, vector<Student>& students, vector<Teacher>& teachers)
{
	School s;
	int size = s.setClassesNum();
	for (int i = 0; i < size; i++)
	{
		Class c;
		string className;
		c.setClassName1(className);
		c.fillStudentsInClass(students);
		c.fillTeachersInClass(teachers);

		this->className = className;
	}
}

//not ok
void School::printClassesInSchool(string className, vector<Student>& students, vector<Teacher>& teachers)
{
	Class c;
	cout << c.getClassID() << endl;
	//c.printStudentsList(students);
	//c.printTeachersList(teachers);
	c.printStudentsAndTeachersList(students, teachers);
}

void School::setSchoolName(string name)
{
	this->schoolName = name;
}

string School::getSchoolName()
{
	return this->schoolName;
}