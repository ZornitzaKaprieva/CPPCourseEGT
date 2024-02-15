#pragma once

/*BlackJackProject:
https://github.com/SDL-DevStyleR-Academy/Training-Project-Assignment/blob/main/README.md

Rules:
Blackjack is played with several decks of cards. 
The object of the game is for the player's hand to beat the dealer's hand, with the sum of the player's hand not exceeding 21 points. 
An ace counts for 1 or 11 points. Jack, Queen, Pop are 10 points each, the other cards - as much as is written on them;

Requirements:
1. At the start of the game, a random number of decks are chosen to be used (4, 6 or 8);
2. The dealer plays against 1 player;
3. The starting capital of the player is $100,000;
4. Player chooses a low or high bet ($100 or $1000);
5. The dealer deals 1 card face up to the player and one card face down to himself, then deals another card face up to the player and himself;
6. The player's current score is displayed on the screen
7. There are 2 buttons: (hit, stay); 7.1. If the player chooses a hit - he gets another card, the score is updated, if he exceeds 21, he loses the round; 7.2 If the player chooses to stay - the player stays with the score he has;
8. If the player is below 21 points, the dealer turns his card face down and starts dealing cards until he improves the player's score or reaches 21 or exceeds 21 (the dealer's score is also shown on the screen);
9. After the end of the round; 9.1 If the player wins the hand, he wins as much as he bet (+ gets back what he bet); 9.2. If the player wins the hand with 21 points, he gets 1.5 times the money bet (+ gets back what he bet); 9.3. If the player loses the hand, he loses what he bet;
10. If the player is left with $0, they lose the game and the game ends;
11. The player can stop the game at any time (between rounds) and the money they have is kept.
12. Sound; 12.1 Sound when cards are dealt; 12.2 Sound when selecting hit and stay; 12.3 Game losing sound; 12.4 Game Stopping Sound;

Project plan:
Class Player: initialCapital, bet ($100 or $1000), currentScore (колко пари има играча 
Class Dealer: numberOfDecks (4, 6, 8), currentScores?
Class DeckOfCards: cards (struct), shuffle, deal, flip (една единствена карта//(are they 2 functions?)
Class Game: Player* Dealer* (+ dealing cards, displaying the game's state, and determining the winner): game logic: rules for scoring, the winning conditions, the betting mechanics)
- да се спира и да се пуска - 
Class GameInterface: buttons for hit, stay and bet.
Class SoundEffects when dealing cards, selecting hit and stay, and when the game ends.
*/