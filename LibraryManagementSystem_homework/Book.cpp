#include "Book.h"
#include <iostream>
using namespace std;

Book::Book(std::string _title, std::string _author, std::string _isbn)
{
	setTitle(_title);
	setAuthor(_author);
	setISBN(_isbn);
}

void Book::setTitle(std::string _title) //Book title should be more than 2 characters
{
	while (_title.length() < 2)
	{
		cout << "Enter more than 2 characters for title!\n";
		cout << "Title: ";
		getline(cin >> ws, _title);
	}

	this->title = _title;
}

std::string Book::getTitle(void) const
{
	return this->title;
}

void Book::setAuthor(std::string _author) //Author name should be more than 2 characters
{
	while (_author.length() < 2)
	{

		cout << "Enter more than 2 characters for author!\n";
		cout << "Author: ";
		getline(cin >> ws, _author);
	}

	this->author = _author;
}

std::string Book::getAuthor(void) const
{
	return this->author;
}

void Book::setISBN(std::string _isbn) //ISBN should be ten-digit number
{
	while (_isbn.length() != 10)
	{
		cout << "Enter a ten-digit number for ISBN: ";
		cin >> _isbn;

		if (_isbn.length() < 10 || _isbn.length() > 10)
		{
			cout << "This ISBN has " << _isbn.length() << " digits." << endl;
		}
	}

	this->isbn = _isbn;
}

std::string Book::getISBN(void) const
{
	return this->isbn;
}

void Book::display(void) const
{
	cout << "Title: " << getTitle() << "\n"
		<< "Author: " << getAuthor() << "\n"
		<< "ISBN: " << getISBN() << endl;
	cout << endl;
}

Book::~Book()
{
}


