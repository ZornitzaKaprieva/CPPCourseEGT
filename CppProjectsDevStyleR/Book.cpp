#include "Book.h"

Book::Book(string _author, string _title, int _year, float _price) //:: Scope resolution operator = Book::Book() {}: this is how we access Book.h
{
	this->author = _author;
	this->title = _title;
	this->year = _year;
	this->price = _price;
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
	if (year < 1900 || year > 2024)
		cout << "There is no book published in " << year << " in the catalog.\n";

	this->year = _year;
}

void Book::setPrice(float _price)
{
		if (price < 0)
			cout << "There is no book with price BGN " << price << " in the catalog.";

	this->price = price;
}

string Book::getAuthor()
{
	return author;
}

string Book::getTitle()
{
	return title;
}

int Book::getYear()
{
	return year;
}

float Book::getPrice()
{
	return price;
}




