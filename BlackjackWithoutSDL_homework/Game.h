#pragma once
#include <iostream>
#include "Player.h"

class Game
{
public:
	Game();
	
	//functions:
	void update();
	
	//getters
	const bool& isRun() { return this->isRunning; } //n/o
	const bool& isOver() { return this->isGameOver; }

	~Game();

private:
	bool isRunning; //n/o
	char command; 
	bool isGameOver; //new
	//newTry
	/*int getPlayerHand;
	int getDealerHand;*/
	//void drawCards();
	//int isPlayerOver21;
	//int isRobotOver21;
	

	Player playerBJ;
	Player dealerBJ;

	//private functions
	void endGame();
	void endGame(int& pHand, int& dHand);
	//bool wantContinue();
	/*//да го отделя във функция wantContinue()
				std::cout << "Enter [any key] to draw a card and [N] to not draw a card.\n";
				std::cin >> currentCommand;
				switch (currentCommand)
				{
				case 'N': std::cout << "No\n"; break;
				case 'n': std::cout << "No\n"; break;
				default: std::cout << "Yes\n"; break;
				}
				//до тук*/
};


