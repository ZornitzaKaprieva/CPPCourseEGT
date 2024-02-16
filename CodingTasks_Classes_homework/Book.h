#pragma once
#include <string>

class Book
{
public:
	Book(std::string, std::string, int); //constructor with parameters
	void display(); //function to print book's details
	~Book(); //destructor
private:
	std::string title; // private attribute for title
	std::string author; // private attribute for author
	int pages; // private attribute for pages

};

