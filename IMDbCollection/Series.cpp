#include "Series.h"
#include <iostream>
using std::cout;
using std::endl;

Series::Series(std::string name, std::string genre, std::string director, std::string actors,
	std::string country, std::string year, float rating, int seasons, int episodes, int durationOfEpisode)
	: Catalog(name, genre, director, actors, country, year, rating)
{
	setSeasons(seasons);
	setEpisodes(episodes);
	setDurationOfEpisode(durationOfEpisode);
}
void Series::printInfo()
{
	cout << getName() << "\n" << getGenre() << endl;
	cout << "Director: " << getDirector() << "\nStars: " << getActors() << endl;
	cout << "Country: " << getCountry() << "\nYear: " << getYear() << endl;
	cout << "Rating: " << getRating() << endl;
	cout << "Seasons: " << getSeasons() << "; Episodes: " << getEpisodes() 
		<< "; Average duration of an episodee: " << getDurationOfEpisode() << " min." << endl;	
	cout << endl;
}

void Series::setSeasons(int seasons)
{
	this->seasons = seasons;

}

int Series::getSeasons(void) const
{
	return this->seasons;
}

void Series::setEpisodes(int episodes)
{
	this->episodes = episodes;

}

int Series::getEpisodes(void) const
{
	return this->episodes;
}

void Series::setDurationOfEpisode(int durationOfEpisode)
{
	this->durationOfEpisode = durationOfEpisode;
}

int Series::getDurationOfEpisode(void) const
{
	return this->durationOfEpisode;
}
