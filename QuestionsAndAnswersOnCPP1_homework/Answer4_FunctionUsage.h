#pragma once

/*4.  Function Usage:
Write about how functions prevent code duplication and give an example of a simple C++ function that calculates the square of a number.
Answer (EN):
Functions are a block of code that performs a specific task. Functions can be reused as many times as needed. This prevents code duplication.
Answer (BG):
��������� �� ���� �� ���, ����� ��������� ��������� ������. ��������� ����� �� �� ������������ ������� ����, ������� � �����, ���� �� ���� ����� �� ����������� �� ��������� �� ���.
Example:
#include<iostream>

int calculateSquare(int x)
{
   return x * x;
}

int main()
{
   std::cout << calculateSquare(3) << std::endl;
   int x = 4;
   std::cout << calculateSquare(x) << std::endl;

   return 0;
}*/