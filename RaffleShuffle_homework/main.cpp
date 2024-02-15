
#include <iostream>
#include "DeckOfCards.h"

int main()
{
    DeckOfCards d;
  
    //Card* deck = new Card [52];
    Card deck [52];
  
    std::cout << "displayDeck before raffleShuffle():" << std::endl;
    d.displayDeck();
    std::cout << std::endl;
   
    std::cout << "raffleShuffle():" << std::endl;
    d.raffleShuffle();
    std::cout << std::endl;

    std::cout << "displayDeck after raffleShuffle():" << std::endl;
    d.displayDeck();
    
}

