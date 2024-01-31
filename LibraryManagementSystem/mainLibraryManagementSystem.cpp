#include"Book.h"
#include"Member.h"
#include <vector>

int main()
{
    // create new Book objects:
    Book* b1 = new Book("Charlie and the Chocolate Factory", "Roald Dahl", "1524787159");
    Book* b2 = new Book("Alice in Wonderland", "Lewis Carroll", "8749522310");
    Book* b3 = new Book("Of Mice and Men", "John Steinbeck", "0140177396");
    Book* b4 = new Book("In Cold Blood", "Truman Capote ", "0679745580");

    // create a book catalog:
    std::vector<Book*> bookCatalog; // Vectors will be used, not arrays, because the exact number of elements is not known.
    bookCatalog.push_back(b1);
    bookCatalog.push_back(b2);
    bookCatalog.push_back(b3);
    bookCatalog.push_back(b4);
    for (int i = 0; i < bookCatalog.size(); i++) // print book catalog
    {
        bookCatalog.at(i)->display();
    }

    // create new Member objects:
    Member* m1 = new Member("Zornitza", 15, "1234567");
    Member* m2 = new Member("Boris", 7, "7654321");

    // create a list of members:
    std::vector<Member*> members; // Vectors will be used, not arrays, because the exact number of elements is not known.
    members.push_back(m1);
    members.push_back(m2);
    for (int i = 0; i < members.size(); i++) // print member list
    {
        members.at(i)->display();
    }

    //simulate borrowing a book:
    members.at(0)->borrowBook(bookCatalog.at(2));
    members.at(0)->borrowBook(bookCatalog.at(3));
    members.at(1)->borrowBook(bookCatalog.at(1));
    members.at(1)->borrowBook(bookCatalog.at(0));
    bookCatalog.at(0)->display();
    members.at(1)->display();
}