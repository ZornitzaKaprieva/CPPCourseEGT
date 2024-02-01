#pragma once
#include "Catalog.h"
#include<string>

class Catalog
{
public: 
	Catalog(std::string, std::string, std::string, std::string, std::string, int, float);
	virtual void printInfo() = 0;
	void setName(std::string);
	std::string getName(void) const;
	void setGenre(std::string);
	std::string getGenre(void) const;
	void setDirector(std::string);
	std::string getDirector(void) const;
	void setActors(std::string);
	std::string getActors(void) const;
	void setCountry(std::string);
	std::string getCountry(void) const;
	void setYear(int);
	int getYear(void) const;
	void setRating(float);
	float getRating(void) const;
	~Catalog();
private:
	std::string name;
	std::string genre;
	std::string director;
	std::string actors;
	std::string country;
	int year;
	float rating;


};

