#include "Book.h"
#include "BookOperations.h"

/*Да се направи клас Книга, който съдържа информация за автор, име, година на издаване и цена.
Да се добавят гетери и сетери и да се раздели на файлове.
В мейн файла да има вектор от книги. Трябва да съдържа поне 4 книги.
1. Да се изведе информация коя е най-евтината или най-скъпата книга.
2. Да има възможност потребителят да въвежда име на автор/заглавие. Ако има такъв автор във вектора, да се изведе информацията за книгата/книгите на този автор.*/

int main()
{
	Book b1("Roald Dahl", "Matilda", 2, 25.0);
	b1.displayInfo();
	b1.setInfo();
	b1.displayInfo();

	vector<Book> books;
	BookOperations o1;
	//int catalogSize = set1.setCatalogSize(); // Unnecessary: set1.setCatalogSize() is used in o1.fillCatalog(books);
	o1.fillCatalog(books);
	o1.printCatalog(books);
	o1.printTheCheapestBook(books);
	o1.printTheMostExpensiveBook(books);
	o1.searchAuthorOrTitle(books);

	return 0;
}
