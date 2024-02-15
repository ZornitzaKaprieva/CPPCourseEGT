#include "Player.h"
#include "DeckOfCards.h"

Player::Player()
{
	this->playerHand = 0;
	this->playerCard = 0;
}

int Player::randomCard()
{
	//DeckOfCards* temp = new DeckOfCards;
	//temp->shuffle();//new
	
	//това да се замени ли с deal()?
	this->playerCard = 1 + rand() % 13; //взима стойността на картата
	this->playerHand += this->playerCard; //прибавя стойността на картатаа към ръката и връща сбора.
	return this->playerCard;
}

int Player::getHand() const
{
	return this->playerHand;
}

int Player::finalScore(int getHand) //todo
{
	return 0;
}

void Player::setName()
{
	std::string name;
	std::cout << "Enter name to start playing: ";
	std::cin >> name;
	std::cout << "Hello, " << name << "! Let`s play Blackjack!\n";

	this->playerName = name;
}

Player::~Player()
{
}
