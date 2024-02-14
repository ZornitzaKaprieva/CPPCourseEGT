#include "Game.h"
#include "Player.h"

Game::Game()
{
	isRunning = true; //n/o
	command = ' ';
	isGameOver = false; //new
	//isPlayerOver21 = 0;
	//isDealerOver21 = 0;
}

void Game::update()
{
	//from main
	srand((unsigned)time(nullptr)); //for random card every time

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

				//как така ги изчислява, защо стойностите се пазят
				std::cout << "Score:\n";
				std::cout << this->playerBJ.getName() << "`s hand: " << this->playerBJ.getHand() << std::endl;
				std::cout << "Dealer's hand: " << this->dealerBJ.getHand() << std::endl;
				std::cout << std::endl;

				//TODO функция, която да позволява на играча да избере дали да продължи или да приключи с този резултат.
				//ако той приключи, дилърът обръща оше една карта за себе си и играта приклчва?

				int pHand = this->playerBJ.getHand();
				int dHand = this->dealerBJ.getHand();
				//как да спра цикъла при над 21?
				this->endGame(pHand, dHand); //to check
				//this->endGame();
			
			std::cout << "Press [Enter] to continue..." << std::endl;
			std::cin.clear();
			std::cin.ignore(); //include <limits> //std::numeric_limits<std::streamsize>::max(), '\n'
			std::cin.ignore();
			system("cls");
			break;
		}
	} while (this->command != '0');
	std::cout << "See you soon!\n";
}


void Game::endGame(int &pHand, int &dHand)
{
	if (this->playerBJ.getHand() <= 21 && this->dealerBJ.getHand() < this->playerBJ.getHand())
	{
		this->isGameOver = true;
		std::cout << "You win!\n";
	}
	else if (this->dealerBJ.getHand() <= 21 && this->playerBJ.getHand() < this->dealerBJ.getHand())
	{
		this->isGameOver = false;
		std::cout << "You loose!\n";
	}
	else
	{
		if (this->playerBJ.getHand() > this->dealerBJ.getHand())
		{
			this->isGameOver = true;
			std::cout << "You win!\n";
		}
		else if (this->dealerBJ.getHand()  < this->playerBJ.getHand())
		{
			this->isGameOver = false;
			std::cout << "You loose!\n";
		}
	}
}

//overloading (to be del)
void Game::endGame()
{
	if (this->playerBJ.getHand() <= 21 && this->dealerBJ.getHand() < this->playerBJ.getHand())
	{
		this->isGameOver = true;
		std::cout << "You win!\n";
	}
	else if (this->dealerBJ.getHand() <= 21 && this->playerBJ.getHand() < this->dealerBJ.getHand())
	{
		this->isGameOver = false;
		std::cout << "You loose!\n";
	}
	else
	{
		if (this->playerBJ.getHand() > this->dealerBJ.getHand())
		{
			this->isGameOver = true;
			std::cout << "You win!\n";
		}
		else if (this->dealerBJ.getHand() < this->playerBJ.getHand())
		{
			this->isGameOver = false;
			std::cout << "You loose!\n";
		}
	}
}


Game::~Game()
{

}
