#include"DeckOfCards.h"

// Member-function definitions for class DeckOfCards that simulates
// the shuffling and dealing of a deck of playing cards.
#include <iostream>
using std::cout;
using std::left;
using std::right;

#include <iomanip>
using std::setw;

#include <cstdlib> // prototypes for rand and srand
using std::rand;
using std::srand;

#include <ctime> // prototype for time
using std::time;

#include "DeckOfCards.h" // DeckOfCards class definition

// no-argument DeckOfCards constructor intializes deck
DeckOfCards::DeckOfCards()
{
    // initialize suit array
    static std::string suit[4] =
    { "Hearts", "Diamonds", "Clubs", "Spades" };

    // initialize face array
    static std::string type[13] =
    { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven",
    "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

    // set values for deck of 52 Cards
    for (int i = 0; i < 52; i++)
    {
        deck[i].type = type[i % 13];
        deck[i].suit = suit[i / 13];

        //+ всяка карта какъв score носи
        //get method for the card
    } // end for

    srand(time(0)); // seed random number generator
} // end no-argument DeckOfCards constructor

// shuffle cards in deck
 void DeckOfCards::shuffle()
{
    // shuffle cards randomly
    for (int i = 0; i < 52; i++)
    {
        int j = rand() % 52;
        Card temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    } // end for
} // end function shuffle

// deal one card in deck
 //void DeckOfCards::deal() //error: why?
 //{
 //    // display each card’s face and suit
 //    for (int i = 0; i < 52; i++)
 //        cout << deck[i].face << " of "
 //        << left << setw(8) << deck[i].suit
 //        << ((i + 1) % 2 ? '\t' : '\n');
 //}


