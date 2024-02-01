#pragma once

/*9. Pointers and References:
Discuss the difference between pointers and references in C++ and provide scenarios where one might be preferred over the other.

Answer (EN): 
Both pointers and references are used to store an address.
A pointer stores (points to) the address of another variable and can be reassigned to another address.
A reference stores the address of a specific variable, ie. it is another name for an already existing variable. A reference must always refer to the same memory address.

Answer (BG): 
����� ����������, ���� � ������������ �� ��������� �� ���������� �� �����. 
��������� ��������� (���� ���) ������ �� ����� ����������, ���� ���� �� ���� ���������� ��� ���� �����.
������������ ��������� ������ �� ��������� ����������, �.�. �� � ����� ��� �� ���� ������������ ����������. ������������ ������ ������ �� �� ������ ��� ���� � ���� ����� � �������.

Example: 

#include<iostream> 
using std::cout;
using std::endl;

int main()
{

int var = 5;
int var2 = 7;
int* ptr = &var;
cout << &var << endl;
cout << ptr << endl;
cout << *ptr << endl;
ptr = &var2;
cout << &var2 << endl;
cout << ptr << endl;
cout << *ptr << endl;

   return 0; 
} 


Recourse:
https://www.youtube.com/watch?v=syy-3fVicUc&t=8s
https://www.youtube.com/watch?v=kiUGf_Z08RQ&t=3413s
*/
