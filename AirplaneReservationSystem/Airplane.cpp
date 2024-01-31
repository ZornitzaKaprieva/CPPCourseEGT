#include "Airplane.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;


Airplane::Airplane(int seats[], int size)
{
	this->size = size;
	this->seats[size] = seats[size];
	
}
void Airplane::availableSeats(int seats[], int size)
{
	for (int i = 1; i <= size; i++)
	{
		int choice;
		cout << "Wanted seat: ";
		cin >> choice;

		if (seats[choice - 1] == 0)
		{

			cout << "You successfully booked seat number " << choice << endl;
			seats[choice - 1] = 1;
		}
		else
		{
			cout << "This seat is no available.\n";

			for (int i = 0; i < size; i++)
			{
				if (seats[i] == 0)
				{
					cout << "You successfully booked seat number " << i + 1 << endl;
					seats[i] = 1;
					break;
				}
			}
		}
	}
}
void Airplane::printSeats(int seats[], int size)
{
	cout << "Seats:\n";
	for (int i = 0; i < size; i++)
	{
		cout << seats[i];
	}
	cout << endl;
}

Airplane::~Airplane()
{
}