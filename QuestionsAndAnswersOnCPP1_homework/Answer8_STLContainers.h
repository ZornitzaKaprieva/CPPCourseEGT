#pragma once

/*8. STL Containers
Write about the purpose and use of the std::vector container in C++.

Answer (EN):  
The std::vector container in C++ is a dynamic array that can hold and operate with different data types.
The biggest advantage of a vector over an array is that it does not need to be set its size in advance, it grows automatically each time an element is added.
A vector can contain both a collection of primitive data (int, float, double, char, bool), as well as strings and even objects.
To be able to use a vector, a suitable library should be included (#include<vector> ).

Answer (BG):  
std::vector container в C++ е динамичен масив, който може да съдържа и оперира с различни данни. 
Най-голямото предимство на вектора пред масива е, че не е необходимо предварително да се зададе размера му, той нараства автоматично при всяко прибавяне на елемент. 
Векторът може да съдържа както колекция от примитивни данни (int, float, double, char, bool), така и стрингове и дори обекти. 
За да може да се използва вектор следва да се включи подходяща за това библиотека (#include<vector> )

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