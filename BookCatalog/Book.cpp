#include "Book.h"


Book::Book()
{
	this->author;
	this->title;
	this->year;
	this->price;
}

Book::Book(string _author, string _title, int _year, float _price) //:: Scope resolution operator = Book::Book() {}: this is how we access Book.h
{
	this->author = _author;
	this->title = _title;
	this->year = _year;
	this->price = _price;
	//setPrice(price);
	//setInfo();
}

void Book::setInfo()
{
	setAuthor(author);
	setTitle(title);
	setYear2(year);
	setPrice(price);
}

void Book::displayInfo()
{
	cout << "Author: " << getAuthor() << "\n" << "Title: " << getTitle() << "\n"
		<< "Year: " << getYear() << "\n" << "Price: BGN " << getPrice() << endl;
	cout << endl;
}

void Book::setAuthor(string _author)
{
	cout << "Author: ";
	getline(cin >> ws, _author);;

	this->author = _author;
}


void Book::setTitle(string _title)
{
	cout << "Title: ";
	getline(cin >> ws, _title);

	this->title = _title;
}

void Book::setYear(int _year)
{
	while (_year < 1900 || _year > 2024)
	{
		cout << "There is no book published in " << _year << " in the catalog.\n";
		cout << "Year: ";
		cin >> _year;

	} 

	this->year = _year;
}
void Book::setYear2(int _year)
{
	do
	{
		cout << "Year: ";
		cin >> _year;

		if (_year < 1900 || _year > 2024)
			cout << "There is no book published in " << _year << " in the catalog.\n";

	} while (_year < 1900 || _year > 2024);

	this->year = _year;
}


void Book::setPrice(float _price)
{
	while (_price <= 0)
	{
		cout << "There is no book with price BGN " << _price << " in the catalog." << endl;
		cout << "Price: ";
		cin >> _price;
	} 

	this->price = _price;
}

void Book::setPrice2(float _price)
{
	do
	{
		cout << "Price: ";
		cin >> _price;

		if (_price <= 0)
			cout << "There is no book with price BGN " << _price << " in the catalog." << endl;;

	} while (_price <= 0);

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
	return this->year;
}

float Book::getPrice() const
{
	return this->price;
}
