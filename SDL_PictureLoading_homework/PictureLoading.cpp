#include "PictureLoading.h"
#include "TextureManager.h"

SDL_Texture* playerTex;
SDL_Rect srcRect, destRect;

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


	//function SDL_Texture* TextureManager::LoadTexture(const char* fileName, SDL_Renderer* ren) is static 
	playerTex = TextureManager::LoadTexture("assets/player.png", renderer); //implement the texture
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

	cnt++;
	//fix src and dest Rect (to fix sizes)
	destRect.h = 100;
	destRect.w = 100;
	//if we want our pic to move:
	destRect.x = cnt; //moves very fast
	std::cout << cnt << std::endl;
}

void PictureLoading::render()
{
	SDL_RenderClear(renderer);

	//This is where we add all of our textures to be rendered

	//SDL_RenderCopy(renderer, playerTex, NULL, NULL); //renderer, playerTex, source rectangle (the part of the texture you want to draw), destination rectangle (where we want it drawn on screen); NULL = whole screen
	SDL_RenderCopy(renderer, playerTex, NULL, &destRect); //renderer, playerTex, source rectangle (the part of the texture you want to draw), destination rectangle (where we want it drawn on screen; &destRect = whow big we want the image (set in update)

	SDL_RenderPresent(renderer);
}

void PictureLoading::clean()
{
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}

PictureLoading::~PictureLoading()
{
}
