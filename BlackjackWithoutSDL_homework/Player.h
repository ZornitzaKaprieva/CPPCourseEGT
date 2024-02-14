#pragma once

#include<iostream>
#include<string>
#include<ctime>
//#include<limits> //

class Player 
{
public:
	Player();
	~Player();

	//functions:
	int randomCard();//<ctime> 

	//getters new
	const std::string getName() const { return this->playerName; } 
	int getHand() const;

	//newTry
	int finalScore(int getHand); //todo

	//setter for name 
	void setName(); //std::string name
private:
	std::string playerName;
	std::string robotName = "Dealer";
	int playerHand;
	int playerCard;
};

