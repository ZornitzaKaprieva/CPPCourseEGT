/*Write a C++ program that:
Uses user-entered integers
Checks whether a given number is even or odd
If the number is even, "even" is written on the screen, if it is odd - "odd"*/

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
	int num;
	do
	{
		cout << "Enter a number to check if it is even or odd. Press 0 to exit: ";
		cin >> num;
		if (num == 0)
		{
			cout << "See you soon!" << endl;
			break;
		}

		if (num % 2 == 0)
		{
			cout << "even" << endl;
		}
		else
		{
			cout << "odd" << endl;
		}

	} while (num != 0);
}

