#include "DeckOfCards.h"
#include <ctime>
#include <iostream>

DeckOfCards::DeckOfCards()
{
    // initialize suit array
    static std::string suit[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };

    // initialize face array
    static std::string type[13] = { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven",
    "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

    // set values for deck of 52 Cards
    for (int i = 0; i < 52; i++)
    {
       // deck[i]->type = type[i % 13];
        deck[i].type = type[i % 13];
        //deck[i]->suit = suit[i / 13];
        deck[i].suit = suit[i / 13];
    } // end for

    srand(time(0)); // seed random number generator
}


void DeckOfCards::raffleShuffle()
{
	Card leftDeck[26];
	Card rightDeck[26];

    //distribute the cards into 2 decks of 26 cards each:
    for (int i = 0; i < 52; i++) {
        if (i < 26) {
            leftDeck[i].type = deck[i].type;
            leftDeck[i].suit = deck[i].suit;
      
        }
        else  
        { 
            rightDeck[i - 26].type = deck[i].type;
            rightDeck[i - 26].suit = deck[i].suit;
           
        }
    }

    for (int i = 0, j = 0; i < 52; i++, j++) {
        if (i % 2 == 0) {
            // i=0; deck[0] = rd[0]  ;  i=2; deck[2] = rd[1]   ;  i=4; deck[4] = rd[2]  ;   i=6; deck[6] = rd[3]
            deck[i].type = rightDeck[i / 2].type;
            deck[i].suit = rightDeck[i / 2].suit;
        }
        else
        {
            // i=1; deck[1] = ld[0]  ;  i=3; deck[3] = ld[1]  ;  i=5; deck[5] = ld[2]  ;  i=7; deck[7] = ld[3]
            deck[i].type = leftDeck[i / 2].type;
            deck[i].suit = leftDeck[i / 2].suit;
        }
    }

}

void DeckOfCards::displayDeck() const
{
    for (int i = 0; i < 52; i++)
        std::cout << deck[i].type << " of "
        << deck[i].suit << std::endl;
}

DeckOfCards::~DeckOfCards()
{
}

