#include "BookOperations.h"
#include "Book.h"

Book BookOperations::setVectorInfo()
{
	string author;
	string title;
	int year;
	float price;

	cout << "Enter author: ";
	getline(cin, author);
	cout << "Enter title: ";
	getline(cin, title);
	cout << "Enter year: ";
	cin >> year;
	cin.ignore(1000, '\n');
	cout << "Enter price: ";
	cin >> price;
	cin.ignore(1000, '\n');
	cout << endl;

	Book newBook(author, title, year, price); //doesn`t work with book.getYear()

	return newBook;
}