#include "Catalog.h"
#include<string>


Catalog::Catalog(std::string name, std::string genre, std::string director, std::string actors, 
	std::string country, int year, float rating)
{
	setName(name);
	setGenre(genre);
	setDirector(director);
	setActors(actors);
	setCountry(country);
	setYear(year);
	setRating(rating);
}

void Catalog::setName(std::string name)
{
	this->name = name;
}

std::string Catalog::getName(void) const
{
	return this->name;
}

void Catalog::setGenre(std::string genre)
{
	this->genre = genre;
}

std::string Catalog::getGenre(void) const
{
	return this->genre;
}

void Catalog::setDirector(std::string director)
{
	this->director = director;
}

std::string Catalog::getDirector(void) const
{
	return this->director;
}

void Catalog::setActors(std::string actors)
{
	this->actors = actors;
}

std::string Catalog::getActors(void) const
{
	return this->actors;
}

void Catalog::setCountry(std::string country)
{
	this->country = country;
}

std::string Catalog::getCountry(void) const
{
	return this->country;
}

void Catalog::setYear(int year)
{
	this->year = year;
}

int Catalog::getYear(void) const
{
	return this->year;
}

void Catalog::setRating(float rating)
{
	if (rating <= 0)
	{
		rating = 1;
	}
	this->rating = rating;
}

float Catalog::getRating(void) const
{
	return this->rating;
}

Catalog::~Catalog()
{}
