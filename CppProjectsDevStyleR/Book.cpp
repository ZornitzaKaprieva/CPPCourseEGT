#include "Book.h"

//:: Scope resolution operator = Book::Book() {}: така достъпваме до Book.h

Book::Book(string _author, string _title, int _year, float _price)
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
	if (_year > 1377 && year < 2024)
	{
		this->year = _year;
	}
	else
	{
		this->year = 0;
		cout << "Invalid year!" << endl;
	}
	
}

void Book::setPrice(float _price)
{
	if (price > 0)
	{
		this->price = _price;
	}
	else
	{
		this->price = 0;
		cout << "Invalid price" << endl;
	}
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




