#pragma once

#include <string>
#include <vector>

// Card structure definition
struct Card
{
	std::string type;
	std::string suit;
}; // end structure Card    


class DeckOfCards
{
public:
	DeckOfCards();
	Card raffleShuffle(Card* deck[52]);
	void displayDeck() const;
	
	~DeckOfCards();
private:
	//std::vector<PlayingCard*> deck;
	Card* deck[52];
};

