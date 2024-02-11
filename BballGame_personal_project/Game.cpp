#include "Game.h"
#include "TextureManager.h"
#include "GameObject.h"
#include "Map.h"
#include "SoundManager.h"

//for the player:
GameObject* bbalPlayer;
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
	bbalPlayer = new GameObject("assets/bballPlayer.png", 60, 150);
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
		std::cout << "case SDL_QUIT\n";
		isRunning = false;
		break;
	default:
		break;
	}
}

void Game::update()
{
	//with GameObject class:
	bbalPlayer->updateObj();
	std::cout << "Update object.\n";
}

void Game::render()
{
	SDL_RenderClear(renderer);

	//This is where we add all of our textures to be rendered
	map->drawMap();
	bbalPlayer->renderObj();

	std::cout << "DrawMap / renderObj\n";

	SDL_RenderPresent(renderer);
}

void Game::loadAndPlaySound()
{
	SoundManager::Instance()->load("assets/rf-16.mp3", "bg_music", 1);
	SoundManager::Instance()->load("assets/gamer-213.wav", "game_over", 0);
	SoundManager::Instance()->load("assets/noti-212.wav", "notification", 0);


	SoundManager::Instance()->playMusic("bg_music", 0, 5000); //филе, колко пъти да се повтаря, 5000?

	
	//SoundManager::Instance()->playSound("game_over", -1, 0);
	SoundManager::Instance()->playSound("notification", -1, 0);
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
