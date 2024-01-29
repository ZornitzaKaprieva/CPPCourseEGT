#include "Movie.h"
#include <iostream>
using std::cout;
using std::endl;

Movie::Movie(std::string name, std::string genre, std::string director, std::string actors,
	std::string country, int year, float rating, int duration) : Catalog(name, genre, director, actors, country, year, rating)
{
	setDuration(duration);
}

void Movie::printInfo()
{
	cout << getName() << "\n" << getGenre() << endl;
	cout << "Director: " << getDirector() << "\nStars: " << getActors() << endl;
	cout << "Country: " << getCountry() << "\nYear: " << getYear() << endl;
	cout << "Rating: " << getRating() << "\nDuration: " << getDuration() << " min." << endl;
	cout << endl;
}

void Movie::setDuration(int duration)
{
	if (duration <= 0)
	{
		duration = 1;
	}
	this->duration = duration;
}

int Movie::getDuration(void) const
{
	return this->duration;
}

Movie::~Movie()
{
}
