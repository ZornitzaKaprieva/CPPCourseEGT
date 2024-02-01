#include "Series.h"
#include <iostream>
using std::cout;
using std::endl;

Series::Series(std::string name, std::string genre, std::string director, std::string actors,
	std::string country, int year, std::string lastYear, float rating, int seasons, int episodes, int durationOfEpisode)
	: Catalog(name, genre, director, actors, country, year, rating)
{
	setLastYear(lastYear);
	setSeasons(seasons);
	setEpisodes(episodes);
	setDurationOfEpisode(durationOfEpisode);
}
void Series::printInfo()
{
	cout << getName() << "\n" << getGenre() << endl;
	cout << "Director: " << getDirector() << "\nStars: " << getActors() << endl;
	cout << "Country: " << getCountry() << "\nYear: " << getYear() << "-" << getLastYear() << endl;
	cout << "Rating: " << getRating() << endl;
	cout << "Seasons: " << getSeasons() << "; Episodes: " << getEpisodes() 
		<< "; Average duration of an episode: " << getDurationOfEpisode() << " min." << endl;	
	cout << endl;
}

void Series::setLastYear(std::string lastYear)
{
	this->lastYear = lastYear;
}

std::string Series::getLastYear(void) const
{
	return this->lastYear;
}

void Series::setSeasons(int seasons)
{
	if (seasons <= 0)
	{
		seasons = 1;
	}

	this->seasons = seasons;
}

int Series::getSeasons(void) const
{
	return this->seasons;
}

void Series::setEpisodes(int episodes)
{
	if (episodes <= 0)
	{
		episodes = 1;
	}
	this->episodes = episodes;
}

int Series::getEpisodes(void) const
{
	return this->episodes;
}

void Series::setDurationOfEpisode(int durationOfEpisode)
{
	if (durationOfEpisode <= 0)
	{
		durationOfEpisode = 1;
	}

	this->durationOfEpisode = durationOfEpisode;
}

int Series::getDurationOfEpisode(void) const
{
	return this->durationOfEpisode;
}

Series::~Series()
{}