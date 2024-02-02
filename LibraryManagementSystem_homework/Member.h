#pragma once
#include"Book.h"

class Member
{
public:
	Member(std::string, int, std::string); //constructor with parameters
	void setName(std::string); //setter for name
	std::string getName(void) const; //getter for name
	void setAge(int); //setter for age
	int getAge(void) const; //getter for age
	void setMemberID(std::string);//setter for member ID
	std::string getMemberID(void) const; //getter for member ID
	void display(void) const; //display info for member
	void borrowBook(Book*); //function that takes a pointer to a Book object.
	~Member(); //destructor
private:
	std::string name;
	int age;
	std::string memberID;
	Book* book;
};

