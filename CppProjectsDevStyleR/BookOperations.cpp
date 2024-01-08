#include "BookOperations.h"
#include "Book.h"

Book BookOperations::setVectorInfo()
{
	string author;
	string title;
	int year;
	float price;

	cout << "Enter author: ";
	getline(cin >> ws, author); //getline(cin, author);
	cout << "Enter title: ";
	getline(cin >> ws, title);
	cout << "Enter year: ";
	cin >> year;
	//cin.ignore();
	cout << "Enter price: ";
	cin >> price;
	//cin.ignore();
	cout << endl;

	Book newBook(author, title, year, price); 

	return newBook;
}