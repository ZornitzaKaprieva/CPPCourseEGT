#pragma once
#include <iostream>
#include "Player.h"


//��� � ������� � �����? 
//��� �� ������� ������������ �� ������� - ���� �� ���� �� � ���� ��� � ����? 
//��� �� ������������� �������� � ���?

class Game
{
public:
	Game();
	
	//functions:
	void update();
	
	//getters
	const bool& isRun() { return this->isRunning; }
	const bool& isNotOver() const { return this->isLoss; }
	//bool isNotOver() const { return this->isLoss; }

	~Game();

private:
	bool isRunning;
	char command; 
	bool isLoss;
	
	Player playerBJ;
	Player dealerBJ;

	//private functions
	void endGame();
	bool endGame(int& pHand, int& dHand);

	//bool wantContinue();
	/*//hit and stay  in player / game class
	
	�� �� ������ ��� ������� wantContinue()
				std::cout << "Enter [any key] to draw a card and [N] to not draw a card.\n";
				std::cin >> currentCommand;
				switch (currentCommand)
				{
				case 'N': std::cout << "No\n"; break;
				case 'n': std::cout << "No\n"; break;
				default: std::cout << "Yes\n"; break;
				}
				//�� ���*/
};


