/*A small airplane has just purchased a computer for its new automated reservations system.
* You have been asked to program the new system.
* You are write a program to assign seats on each flight of the airline`s only plane (capacity: 10 seats)
Make appropriate menu and messages.*/

#include <iostream>
#include "Airplane.h"
using std::cout;
using std::endl;
using std::cin;

//void printSeats(int[], int);
//void availableSeats(int[], int);

int main()
{
	const int size = 10;
	int seats[size] = {};//{0,0,0,0,0,0,0,0,0,0};
	
	Airplane a1(seats, size);
	a1.printSeats(seats, size);
	a1.availableSeats(seats, size);
	

	//printSeats(seats, size);
	//availableSeats(seats, size);

	
}

//void printSeats(int seats[], int size)
//{
//	cout << "Seats:\n";
//	for (int i = 0; i < size; i++)
//	{
//		cout << seats[i];
//	}
//	cout << endl;
//}
//
//void availableSeats(int seats[], int size)
//{
//	for (int i = 1; i <= size; i++)
//	{
//		int choice;
//		cout << "Wanted seat: ";
//		cin >> choice;
//
//		if (seats[choice - 1] == 0)
//		{
//
//			cout << "You successfully booked seat number " << choice << endl;
//			seats[choice - 1] = 1;
//		}
//		else
//		{
//			cout << "This seat is no available.\n";
//
//			for (int i = 0; i < size; i++)
//			{
//				if (seats[i] == 0)
//				{
//					cout << "You successfully booked seat number " << i + 1 << endl;
//					seats[i] = 1;
//					break;
//				}
//			}
//		}
//	}
//}