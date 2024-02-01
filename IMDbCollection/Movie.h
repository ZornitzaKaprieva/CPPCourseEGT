#pragma once
#include "Catalog.h"

class Movie : public Catalog
{
public: 
	Movie(std::string, std::string, std::string, std::string, std::string, int, float, int);
	void printInfo() override;
	void setDuration(int);
	int getDuration(void) const;
	~Movie();
private: 
	int duration;
};

