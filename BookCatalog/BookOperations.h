#pragma once

# include "Book.h"

class BookOperations
{
public:
	int setCatalogSize();
	void fillCatalog(vector<Book>&);
	Book setVectorInfo();
	void printCatalog(vector<Book>&);
	void printTheCheapestBook(vector<Book>&);
	void printTheMostExpensiveBook(vector<Book>&);
	void searchAuthorOrTitle(vector<Book>&);
private:
	int catalogSize;
};

