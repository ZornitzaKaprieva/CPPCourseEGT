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

    //разпределяме картите в 2 тестета по 26 карти:
    for (int i = 0; i < 52; i++) {
        if (i <= 25) {
            leftDeck[i].type = deck[i].type;
            leftDeck[i].suit = deck[i].suit;
            std::cout << "FOR 1: " << leftDeck[i].type << std::endl; //to del
        }
        else  
        { 
            rightDeck[i].type = deck[i].type;
            rightDeck[i].suit = deck[i].suit;
            std::cout << "ELSE 1: " << rightDeck[i].type << std::endl; //to del
        }
    }

    for (int i = 0; i < 52; i++) {
        std::cout << "INTRO: " << i << std::endl; //to del
        if (i == 0 || i % 2 == 0) {
           
            deck[i].type =  rightDeck[i].type;
           
            deck[i].suit = rightDeck[i].suit;
            std::cout << "FOR 2: " << deck[i].suit << std::endl; //to del
        }
        else 
        {   
            deck[i].type = leftDeck[i].type;           
            deck[i].suit = leftDeck[i].suit;
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

