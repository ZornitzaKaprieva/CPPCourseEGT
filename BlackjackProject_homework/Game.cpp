#include "Game.h"
#include "TextureManager.h"
#include "GameObject.h"
#include "Map.h"
#include "SoundManager.h"
#include "DeckOfCards.h"

//for the player:
GameObject* player;
GameObject* dealer;
DeckOfCards* deckOfCards;//как да изведа всяка карта 
//for the field:
Map* map;

SDL_Renderer* Game::renderer = nullptr; //new 6 дефинираме го и го инициализираме с нул, защото не сме инициализрали стл още

Game::Game()
{
	Game::window = NULL;
	Game::renderer = NULL;
}

//initialize subsystems:
void Game::init(const char* title, int width, int height, bool fullscreen)
{
	int flags = 0;

	if (fullscreen)  //in this case flags are fullscreen. Used as parameter in creating window
	{
		flags = SDL_WINDOW_FULLSCREEN;
	}

	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) //check for errors before creating windows and renderers
	{
		std::cout << "Subsystems initialized.\n";

		window = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, flags); //create a window 
		if (window != 0) //check window init success before creating renderers
		{
			std::cout << "Window created.\n";

			renderer = SDL_CreateRenderer(window, -1, 0); //create a renderer 
			if (renderer != 0) //check renderer init success
			{
				SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);//set color:
				std::cout << "Renderer created\n";
			}
		}

		isRunning = true; // in main if
	}
	else
	{
		isRunning = false; // if there are errors while creating subsystems (window and renderer)
	}

	//after successfully created window and render:
	player = new GameObject("img/iconB.png", 378, 10);
	dealer = new GameObject("img/iconR.png", 378, 500);

	map = new Map();
	std::cout << "Object/s created.\n";
}

void Game::handleEvents()
{
	SDL_Event event;

	SDL_PollEvent(&event);

	switch (event.type)
	{
	case SDL_QUIT:
		std::cout << "QUIT event\n";
		isRunning = false;
		break;
	case SDL_KEYDOWN: {
		if (event.key.keysym.sym == SDLK_1) { // press 1 to increase volume //не работи
			SoundManager::Instance()->changeVolume(1);
			std::cout << "Increase volume\n";

		}
		if (event.key.keysym.sym == SDLK_0) { // press 0 to decrease volume //не работи
			SoundManager::Instance()->changeVolume(-1);
			std::cout << "Decrease volume\n";

		}
		if (event.key.keysym.sym == SDLK_LALT) { // pressing left alt, pauses and resumes the music
			SoundManager::Instance()->pauseOrPlay();
			std::cout << "Music paused.\n";
		}
		break;
	}
	default:
		break;
	}
}

void Game::update()
{

	//with GameObject class:
	player->updateObj();
	dealer->updateObj();
	std::cout << "Update object.\n";
}

void Game::render()
{
	SDL_RenderClear(renderer);

	//This is where we add all of our textures to be rendered
	map->drawMap();
	player->renderObj();
	dealer->renderObj();

	std::cout << "DrawMap / renderObj\n";

	SDL_RenderPresent(renderer);
}

void Game::loadAndPlaySound()
{
	SoundManager::Instance()->load("sounds/flip.mp3", "flip", 1);
	SoundManager::Instance()->load("sounds/win.wav", "win", 0);
	SoundManager::Instance()->load("sounds/lose.wav", "lose", 0);


	//todo да се изведат в отделна функция (с иф)
	SoundManager::Instance()->playMusic("flip", 0, 3); //филе, колко пъти да се повтаря, 5000?

	//SoundManager::Instance()->playSound("win", -1, 0); //какво означават -1 0
	//SoundManager::Instance()->playSound("lose", -1, 0);

	std::cout << "Play and Sound loaded.\n";
}


void Game::clean()
{

	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
	std::cout << "Clean\n";
}

Game::~Game()
{
	std::cout << "Destructor\n";
}
