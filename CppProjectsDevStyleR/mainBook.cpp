#include "Book.h"
#include "BookSet.h"
#include<vector>

/*Да се направи клас Книга, който съдържа информация за автор, име, година на издаване и цена.
Да се добавят гетери и сетери и да се раздели на файлове.
В мейн файла да има вектор от книги. Трябва да съдържа поне 4 книги.
Да се изведе информация коя е най-евтината или най-скъпата книга.*/

int main()
{

	vector<Book> books;
	BookSet set1;

	for (int i = 0; i < 3; i++)
	{
		Book newBook = set1.inputData();
		books.push_back(newBook);
	}

	for (int i = 0; i < books.size(); i++)
	{
		books.at(i).displayInfo();
		cout << endl;
	}
	return 0;

}
