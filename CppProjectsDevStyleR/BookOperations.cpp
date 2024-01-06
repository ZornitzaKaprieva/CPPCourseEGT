#include "BookOperations.h"

Book BookOperations::setInfo()
{
    string author;
    string title;
    int year;
    float price;

    cout << "Enter author: ";
    getline(cin, author);
    //cin >> author;
    cout << "Enter title: ";
    getline(cin, title);
    //cin >> title;
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter price: ";
    cin >> price;

    Book newBook(author, title, year, price);

    return newBook;
} 

