#pragma once

/*8. STL Containers
Write about the purpose and use of the std::vector container in C++.

Answer (EN):  
The std::vector container in C++ is a dynamic array that can hold and operate with different data types.
The biggest advantage of a vector over an array is that it does not need to be set its size in advance, it grows automatically each time an element is added.
A vector can contain both a collection of primitive data (int, float, double, char, bool), as well as strings and even objects.
To be able to use a vector, a suitable library should be included (#include<vector> ).

Answer (BG):  
std::vector container � C++ � ��������� �����, ����� ���� �� ������� � ������� � �������� �����. 
���-�������� ���������� �� ������� ���� ������ �, �� �� � ���������� ������������� �� �� ������ ������� ��, ��� �������� ����������� ��� ����� ��������� �� �������. 
�������� ���� �� ������� ����� �������� �� ���������� ����� (int, float, double, char, bool), ���� � ��������� � ���� ������. 
�� �� ���� �� �� �������� ������ ������ �� �� ������ ��������� �� ���� ���������� (#include<vector> )

Example: 

#include<iostream> 
#include<vector> 
using std::cout;
using std::endl;

int main()
{
std::vector<int> myInt;
  myInt.push_back(12);
  myInt.push_back(10);
  myInt.push_back(29);
  myInt.push_back(11);

  for(unsigned int i = 0; i < myInt.size(); i++)
  {
   cout << myInt.at(i) << endl;
  }

   return 0; 
} 
*/