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

