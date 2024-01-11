#include "Hall.h"
#include<iostream>
#include<string>
#include<vector>


Hall::Hall(string hallName, int capacity)
{
	setName(hallName);
	setSeats(capacity);
}

Hall::Hall(string name, int seats, vector<Screening> screeningList) : screeningList(screeningList)
{
	setName(name);
	setSeats(seats);
}
void Hall::setScreeningList(vector<Screening>)
{
}

vector<Screening> Hall::getScreeningList()
{
	return this->screeningList;
}

void Hall::addScreening(Screening obj)
{
	this->screeningList.push_back(obj);
}
void Hall::setName(string name)
{
	this->name = name;
}

void Hall::setSeats(int capacity)
{
	this->seats = capacity;
}
void Hall::print()
{
	
	cout << "Hall is " << getName() << " with " << this->seats << " seats"; // this->name
	for (int i = 0; i < this->screeningList.size(); i++)
	{
		cout << "\nProjection is " << this->screeningList.at(i).getMovieName() << " (" << this->screeningList.at(i).getSoldTickets() << "). ";
	}

}

string Hall::getName()
{
	return this->name;
}