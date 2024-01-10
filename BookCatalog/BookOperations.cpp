#include "BookOperations.h"
#include "Book.h"

int BookOperations::setCatalogSize() //in use in: void BookOperations::fillCatalog(vector<Book>& books)
{
	int catalogSize;
	cout << "Enter how many books should be in the catalog: ";
	cin >> catalogSize;
	return catalogSize;
}

void BookOperations::fillCatalog(vector<Book>& books)
{
	BookOperations set1;
	int catalogSize = set1.setCatalogSize();
	for (int i = 0; i < catalogSize; i++)
	{
		Book newBook = set1.setVectorInfo();
		books.push_back(newBook);
	}
}

Book BookOperations::setVectorInfo()
{
	Book b;
	string author;
	string title;
	int year;
	float price;

	cout << "Enter author: ";
	getline(cin >> ws, author); //getline(cin, author);
	cout << "Enter title: ";
	getline(cin >> ws, title);
	cout << "Enter year: ";
	cin >> year;
	b.setYear(year);
	cin.ignore();
	cout << "Enter price: ";
	cin >> price;
	b.setPrice(price);
	cin.ignore();
	cout << endl;

	Book newBook(author, title, year, price);

	return newBook;
}

void BookOperations::printCatalog(vector<Book>& books)
{
	cout << "BOOK CATALOG:\n" << endl;
	int size = books.size();
	for (int i = 0; i < size; i++)
	{
		books.at(i).displayInfo();
	}
}

void BookOperations::printTheCheapestBook(vector<Book>& books)
{
	int size = books.size();
	float minPrice = INT_MAX;
	int sequenceCheapest = 0;
	for (int i = 0; i < size; i++)
	{
		float price = books.at(i).getPrice();

		if (price < minPrice)
		{
			minPrice = price;
			sequenceCheapest = i;
		}
	}
	cout << "The cheapest book in the catalog costs BGN " << minPrice << ": " << endl;
	books.at(sequenceCheapest).displayInfo();
}

void BookOperations::printTheMostExpensiveBook(vector<Book>& books)
{
	float maxPrice = 0;
	int sequenceMostExpensive = 0;
	for (int i = 0; i < books.size(); i++)
	{
		float price = books.at(i).getPrice();

		if (price > maxPrice)
		{
			maxPrice = price;
			sequenceMostExpensive = i;
		}
	}

	cout << "The most expensive book in the catalog costs BGN " << maxPrice << ": " << endl;
	books.at(sequenceMostExpensive).displayInfo();
}

void BookOperations::searchAuthorOrTitle(vector<Book>& books)
{
	cout << "SEARCH BY AUTHOR OR TITLE:\n" << endl;

	cout << "Enter the author or title you are looking for: ";
	string userSearch;
	getline(cin >> ws, userSearch);
	cout << endl;

	int coutResults = 0;
	for (int i = 0; i < books.size(); i++)
	{
		string currentAuthor = books.at(i).getAuthor();
		string currentTitle = books.at(i).getTitle();
		if (userSearch == currentAuthor || userSearch == currentTitle) {
			books.at(i).displayInfo();
			coutResults++;
		}
	}
	if (coutResults == 0)
		cout << "No results for " << userSearch << endl;
}

