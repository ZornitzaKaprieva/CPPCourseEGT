#pragma once

#ifndef CPPCLASSES_BOOK_H //��������� �����
#define CPPCLASSES_BOOK_H

#include<iostream>
#include <string>
using namespace std;

class Book
{
public:
    Book() {}

    Book(string, string, int, float); //�������� ��������� �� �������������: ����� � ���� �� ��������� ��������
    void setAuthor(string);
    string getAuthor();
    void setTitle(string);
    string getTitle();
    void setYear(int);
    int getYear();
    void setPrice(float);
    float getPrice();
    void displayInfo();

private:
    string author;
    string title;
    int year;
    float price;

};

#endif // !CPPCLASSES_BOOK_H
