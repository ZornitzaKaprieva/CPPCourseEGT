#pragma once
#include "Catalog.h"

class Movie : public Catalog
{
public: 
	Movie(std::string, std::string, std::string, std::string, std::string, std::string, float, int);
	~Movie();
	void printInfo() override;
	void setDuration(int);
	int getDuration(void) const;
private: 
	int duration;
};

