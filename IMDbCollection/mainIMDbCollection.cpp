#include <iostream>
#include<vector>
using std::cout;
using std::endl;

#include"Catalog.h"
#include"Movie.h"
#include"Series.h"

int main()
{
	//Movie(std::string name, std::string genre, std::string director, std::string actors, std::string country, std::string year, float rating, int duration)
	Catalog* c1 = new Movie("Wag the dog", "Comedy/Drama", "Barry Levinson", "Dustin Hoffman, Robert De Niro, Anne Hache", "USA", 1997, 7.1, 97);
	//Series(std::string name, std::string genre, std::string director, std::string actors, std::string country, std::string year, float rating, int seasons, int episodes, int durationOfEpisode)
	Catalog* c2 = new Series("Friends", "Comedy/Romance", "David Crane, Marta Kaufman", "Jennifer Aniston, Cortney Cox, Lisa Kudrow, Matt LeBlanc, Matthew Perry, David Schwimmer", "USA", 1994, "2004", 8.9, 10, 235, 23);

	/*c1->printInfo();
	c2->printInfo();*/
	std::vector<Catalog*> catalog;
	catalog.push_back(c1); // (new Movie("Wag the dog", "Comedy/Drama", "Barry Levinson", "Dustin Hoffman, Robert De Niro, Anne Hache", "USA", "1997", 7.1, 97));
	catalog.push_back(c2); // (new Series("Friends", "Comedy/Romance", "David Crane, Marta Kaufman", "Jennifer Aniston, Cortney Cox, Lisa Kudrow, Matt LeBlanc, Matthew Perry, David Schwimmer", "USA", "1994 - 2004", 8.9, 10, 235, 23));
	for (int i = 0; i < catalog.size(); i++) //(auto it = catalog.begin(); it != catalog.end(); it++)
	{
		catalog.at(i)->printInfo();
	}
}
