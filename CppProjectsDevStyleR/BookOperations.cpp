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
	cout << "Enter price: ";
	cin >> price;

	Book newBook(author, title, year, price);

	return newBook;
}