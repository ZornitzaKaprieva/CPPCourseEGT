#include "Book.h"
#include "BookOperations.h"

/*�� �� ������� ���� �����, ����� ������� ���������� �� �����, ���, ������ �� �������� � ����.
�� �� ������� ������ � ������ � �� �� ������� �� �������.
� ���� ����� �� ��� ������ �� �����. ������ �� ������� ���� 4 �����.
1. �� �� ������ ���������� ��� � ���-�������� ��� ���-������� �����.
2. �� ��� ���������� ������������ �� ������� ��� �� �����/��������. ��� ��� ����� ����� ��� �������, �� �� ������ ������������ �� �������/������� �� ���� �����.*/

int main()
{
	Book b1("Roald Dahl", "Matilda", 2020, 25.0);
	b1.displayInfo();
	/*Book b2;
	b2.setInfo();
	b2.displayInfo();*/

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
