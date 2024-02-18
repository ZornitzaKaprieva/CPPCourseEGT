#pragma once

#include<iostream>
#include<string>
#include<ctime>
#include"DeckOfCards.h"

class Player : public DeckOfCards
{
public:
	Player();
	~Player();

	//method:
	int randomCard();//<ctime> 

	//getters:
	const std::string getName() const { return this->playerName; } 
	int getHand() const;

	//new:
	int finalScore(int getHand); //todo

	//setter for name 
	void setName(); 
private:
	std::string playerName;
	std::string robotName = "Dealer";
	int playerHand;
	int playerCard;
};

