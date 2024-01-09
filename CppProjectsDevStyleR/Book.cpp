#include "Book.h"

Book::Book(string _author, string _title, int _year, float _price) //:: Scope resolution operator = Book::Book() {}: this is how we access Book.h
{
	this->author = _author;
	this->title = _title;
	this->year = _year;
}

void Book::displayInfo()
{
	cout << "Author: " << getAuthor() << "\n" << "Title: " << getTitle() << "\n"
		<< "Year: " << getYear() << "\n" << "Price: BGN " << getPrice() << endl;
	cout << endl;
}

void Book::setAuthor(string _author)
{
	this->author = _author;
}

void Book::setTitle(string _title)
{
	this->title = _title;
}

void Book::setYear(int _year)
{
	do
	{
		cout << "Year: ";
		cin >> year;

		if(year < 1900 || year > 2024)
		cout << "There is no book published in " << year << " in the catalog.\n";
		
	} while (year < 1900 || year > 2024);

	this->year = _year;
}

void Book::setPrice(float _price)
{
	do
	{
		cout << "Price: ";
		cin >> price;

		if (price < 0)
			cout << "There is no book with price BGN " << price << " in the catalog.";

	} while (price < 0);

	this->price = _price;
}

string Book::getAuthor() const
{
	return author;
}

string Book::getTitle() const
{
	return title;
}

int Book::getYear() const
{
	return year;
}

float Book::getPrice() const
{
	return price;
}




