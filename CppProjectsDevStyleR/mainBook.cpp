#include "Book.h"
#include "BookOperations.h"

/*Да се направи клас Книга, който съдържа информация за автор, име, година на издаване и цена.
Да се добавят гетери и сетери и да се раздели на файлове.
В мейн файла да има вектор от книги. Трябва да съдържа поне 4 книги.
1. Да се изведе информация коя е най-евтината или най-скъпата книга.
2. Да има възможност потребителят да въвежда име на автор. Ако има такъв автор във вектора, да се изведе информацията за книгата/книгите на този автор.*/

int main()
{
	vector<Book> books;
	BookOperations set1;
	int catalogSize;

	cout << "Enter how many books should be in the catalog: ";
	cin >> catalogSize;

	for (int i = 0; i < catalogSize; i++)
	{
		Book newBook = set1.setVectorInfo();
		books.push_back(newBook);
	}

	cout << "BOOK CATALOG:\n" << endl;
	for (int i = 0; i < catalogSize; i++)
	{
		books.at(i).displayInfo();
	}

	float maxPrice = 0;
	float minPrice = INT_MAX;
	int sequenceCheapest = 0;
	int sequenceMostExpensive = 0;

	for (int i = 0; i < books.size(); i++)
	{
		float price = books.at(i).getPrice();

		if (price > maxPrice)
		{
			maxPrice = price;
			sequenceMostExpensive = i;
		}
		if (price < minPrice)
		{
			minPrice = price;
			sequenceCheapest = i;
		}
	}

	cout << "The cheapest book in the catalog costs BGN " << minPrice << ": " << endl;
	books.at(sequenceCheapest).displayInfo();

	cout << "The most expensive book in the catalog costs BGN " << maxPrice << ": " << endl;
	books.at(sequenceMostExpensive).displayInfo();

	cout << "SEARCH BY AUTHOR:\n" << endl;

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

	return 0;
}
