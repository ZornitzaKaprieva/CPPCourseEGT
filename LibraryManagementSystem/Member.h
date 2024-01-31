#pragma once
#include"Book.h"

class Member
{
public:
	Member(std::string, int, std::string);
	void setName(std::string);
	std::string getName(void) const;
	void setAge(int);
	int getAge(void) const;
	void setMemberID(std::string);
	std::string getMemberID(void) const;
	void display(void) const;
	void borrowBook(Book*);
	~Member();
private:
	std::string name;
	int age;
	std::string memberID;
	Book* book;
};

