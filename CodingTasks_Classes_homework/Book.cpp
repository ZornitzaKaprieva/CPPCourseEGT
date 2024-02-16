#include "Book.h"
#include<iostream> //

Book::Book(std::string title, std::string author, int pages)
{
	//initialize the attributes: 
	this->title = title;
	this->author = author;
	this->pages = pages;
}

void Book::display()
{
	std::cout << "Title: " << this->title
		<< "\nAuthor: " << this->author
		<< "\nPages: " << this->pages << std::endl;
}

Book::~Book() {}
