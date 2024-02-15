#pragma once
#include<iostream>


// Card structure definition
struct Card
{
	std::string face;
	std::string suit;

	//4резултат на картата
}; // end structure Card    


class DeckOfCards
{
public:
	DeckOfCards(); // constructor initializes deck
	void shuffle(); // shuffles cards in deck
	//void deal(); // deals cards in deck - клас табле - логитв нв игрвта, той ще държи плейър, дилър, и тестото логиката и ще му вика методите и тов е единие// композиция, аз да взима каквото му е неоходимо


private:
	Card deck[52]; // represents deck of cards
}; // end class DeckOfCards

