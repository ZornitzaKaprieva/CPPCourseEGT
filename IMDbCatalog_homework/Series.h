#pragma once

#include "Catalog.h"

class Series : public Catalog
{
public:
	Series(std::string, std::string, std::string, std::string, std::string, int, std::string, float, int, int, int);
	void printInfo() override;
	void setLastYear(std::string);
	std::string getLastYear(void) const;
	void setSeasons(int);
	int getSeasons(void) const;
	void setEpisodes(int);
	int getEpisodes(void) const;
	void setDurationOfEpisode(int);
	int getDurationOfEpisode(void) const;
	~Series();
private:
	int seasons;
	std::string lastYear; // int or "-" 
	int	episodes;
	int	durationOfEpisode;

};

