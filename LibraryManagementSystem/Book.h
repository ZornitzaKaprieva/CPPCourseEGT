#pragma once
#include<string>

class Book
{
public:
	Book(std::string, std::string, std::string); //constructor with parameters
	void setTitle(std::string); //setter for title
	std::string getTitle(void) const; //getter for title
	void setAuthor(std::string);  //setter for author
	std::string getAuthor(void) const; //getter for author
	void setISBN(std::string);  //setter for ISBN
	std::string getISBN(void) const; //getter for ISBN
	void display(void) const; //display info for book
	~Book(); //destructor
private:
	std::string title;
	std::string author;
	std::string isbn;	
};

