#include "Game.h"
#include "Player.h"

Game::Game()
{
	isRunning = true;
	command = ' ';
	isLoss = true;
}

void Game::update()
{
	srand((unsigned)time(0)); //for random card every time

	this->playerBJ.setName();
	do {
		std::cout << "Enter [1] to draw a card. First person that that is closer to 21 wins! Enter [0] for exit\n";
		std::cin >> this->command;

		switch (this->command)
		{
		case '0': break;
		case '1':
			std::cout << "Current hand:\n";
				std::cout << this->playerBJ.getName() << " flip: " << this->playerBJ.randomCard() << std::endl;
				std::cout << "Dealer flip: " << this->dealerBJ.randomCard() << std::endl;
				std::cout << std::endl;

				//Изчисляваме резултата от стойностите на обърнатите карти
				std::cout << "Score:\n";
				std::cout << this->playerBJ.getName() << "`s hand: " << this->playerBJ.getHand() << std::endl;
				std::cout << "Dealer's hand: " << this->dealerBJ.getHand() << std::endl;
				std::cout << std::endl;

				//TODO функция, която да позволява на играча да избере дали да продължи или да приключи с този резултат.
				//ако той приключи, дилърът обръща оше една карта за себе си и играта приключва?

				int pHand = this->playerBJ.getHand();
				int dHand = this->dealerBJ.getHand();
				//this->endGame(pHand, dHand);

				if (this->endGame(pHand, dHand)) //to check 
				{
					break;
				}
				else
				{
					std::cout << "Press [Enter] to continue..." << std::endl;
					std::cin.clear();
					std::cin.ignore(); //include <limits> //std::numeric_limits<std::streamsize>::max(), '\n'
					std::cin.ignore();
					system("cls");
					break;
				}
				
			
			
		}
	} while (this->command != '0' && this->playerBJ.getHand() <= 21); // || this->playerBJ.getHand() > 21);

	//как да нулирам резултата на score = 0?
	playerBJ.getHand() == 0;
	std::cout << "See you soon!\n";
	
}

bool Game::endGame(int &pHand, int &dHand) 
{
	if (this->playerBJ.getHand() == 21)
	{
		this->isLoss = false;
		std::cout << "You won!\n";
		//playerBJ.getHand() == 0;
	}
	else if (this->playerBJ.getHand() < 21)
	{
		if (this->dealerBJ.getHand() < this->playerBJ.getHand())
		{
			this->isLoss = false;
			//std::cout << "You won!\n";
		}
		else if (this->playerBJ.getHand() < this->dealerBJ.getHand())
		{
			this->isLoss = true;
			//std::cout << "You lost!\n";
		}			
	}
	else
	{
		this->isLoss = true;
		std::cout << "You lost!\n";
		//playerBJ.getHand() == 0;
	}
	
	return false;
	
}


Game::~Game()
{

}
