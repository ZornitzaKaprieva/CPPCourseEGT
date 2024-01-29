#pragma once

#include "Catalog.h"

class Series : public Catalog
{
public:
	Series(std::string, std::string, std::string, std::string, std::string, std::string, float, int, int, int);
	void printInfo() override;
	void setSeasons(int);
	int getSeasons(void) const;
	void setEpisodes(int);
	int getEpisodes(void) const;
	void setDurationOfEpisode(int);
	int getDurationOfEpisode(void) const;
private:
	int seasons;
	int	episodes;
	int	durationOfEpisode;

};

