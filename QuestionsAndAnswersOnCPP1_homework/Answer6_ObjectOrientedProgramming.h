#pragma once

/*6. Object-Oriented Programming 
Explain the concept of encapsulation in C++ and how it is achieved using classes. 

Answer (EN): 
Encapsulation is how we organize access to variables and functions in a class. 
They can be private, protected, and public, which helps them have a different level of access from other classes. 
This is done in order to refine the control over access to information in the class, as well as to ensure greater data security.

Answer (BG): 
������������ � ������� �� ����� ��� ������������ ������� �� ������������ � ��������� � �����. 
�� ����� �� ����� private, protected and public, ����� ������ �� ���� �������� ���� �� ������ �� ������� �������. 
���� �� �����, �� �� �� ��������� �������� ����� ������� �� ������������ � �����, ����� � �� ����������� �� ��-������ ��������� �� �������. 

Example: 
The example shows 2 private variables - string name and int age, which means that these variables can only be accessed within the class. To be able to manipulate them, we need to create additional public setters and getters:

class Person
{
public:
   Person(string, int);
   void printInfo();
   void setName(string);
   void setAge(int);
   string getName(void) const;
   int getAge();
private:
   string name;
   int age;
}; */