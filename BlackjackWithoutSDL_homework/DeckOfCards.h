#pragma once
#include<iostream>


// Card structure definition
struct Card
{
	std::string type;
	std::string suit;
	//+резултат на картата
}; // end structure Card    


class DeckOfCards
{
public:
	DeckOfCards(); // constructor initializes deck
	void shuffle(); // shuffles cards in deck
	//void deal(); // deals cards in deck - да се добави клас Table, където ще е логиката на играта - ще държи плейър, дилър, и тестето и ще вика методите // да се направи с композиция, аз се взима каквото е необходимо


private:
	Card deck[52]; // represents deck of cards
}; // end class DeckOfCards

