#pragma once
#include<string>

class Book
{
public:
	Book(std::string, std::string, std::string);
	void setTitle(std::string);
	std::string getTitle(void) const;
	void setAuthor(std::string);
	std::string getAuthor(void) const;
	void setISBN(std::string);
	std::string getISBN(void) const;
	void display(void) const;
	~Book();
private:
	std::string title;
	std::string author;
	std::string isbn;	
};

