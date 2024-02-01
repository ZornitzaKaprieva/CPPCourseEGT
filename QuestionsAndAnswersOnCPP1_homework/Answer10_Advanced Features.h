#pragma once

/*10. Advanced Features: 
Explain the concept of templates in C++ and how they support generic programming. 
Include a simple example of template function. 

Answer (EN): 
Generics can be very useful if the goal is to use the same code but with different data types.
For example, if the goal is to create a function to multiply two numbers, there is no need to create different functions for real numbers and integers. 
A template can be created that accepts both int, double and float

Answer (BG): 
Generics могат да бъдат много полезни, ако целта е да се използва един и същ код, но с различни типове данни.
Например, ако целта е да се създаде функция за умножение на две числа, няма нужда да се създават различни функции за реални числа и цели числа. 
Може да се създаде шаблон, който приема както int, double, така и float.

Example: 

#include<iostream> 
using std::cout;
using std::endl;

template <typename T>
T multiply(T x, T y) {
    return x * y;
}
 
int main()
{
cout << multiply(5, 3) << endl;
cout << multiply(5.2, 3.5) << endl;

   return 0; 
} 

Recourse: https://www.youtube.com/watch?v=qrJjFN4Igfw&t=515s
*/
