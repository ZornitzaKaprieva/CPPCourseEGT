#include "PictureLoading.h"
#include "TextureManager.h"
#include "GameObject.h"
#include "Map.h"

//for the player:
GameObject* bbalPlayer;
//for the field:
Map* map;

SDL_Renderer* PictureLoading::renderer = nullptr; //new 6 дефинираме го и го инициализираме с нул, защото не сме инициализрали стл още


PictureLoading::PictureLoading()
{
	PictureLoading::window = NULL;
	PictureLoading::renderer = NULL;
}

//initialize subsystems:
void PictureLoading::init(const char* title, int width, int height, bool fullscreen)
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

void PictureLoading::handleEvents()
{
	SDL_Event event;

	SDL_PollEvent(&event);

	switch (event.type)
	{
	case SDL_QUIT:
		isRunning = false;
		break;
	default:
		break;
	}
}

void PictureLoading::update()
{
	//with GameObject class:
	bbalPlayer->updateObj();
	std::cout << "Update object.\n";
}

void PictureLoading::render()
{
	SDL_RenderClear(renderer);

	//This is where we add all of our textures to be rendered
	map->drawMap();
	bbalPlayer->renderObj();

	std::cout << "renderObj / DrawMap\n";

	SDL_RenderPresent(renderer);
}

void PictureLoading::clean()
{

	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
	std::cout << "Clean\n";
}

PictureLoading::~PictureLoading()
{
	std::cout << "Destructor\n";
}
