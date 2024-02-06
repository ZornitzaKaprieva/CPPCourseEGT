#include "Game.h"
#include <iostream>

int c = 0; // using in void Game::update()

bool Game::init(const char* title, int xpos, int ypos, int width, int height, int flags) 
{
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) { // initializes the sdl library and returns 0 on success
		std::cout << "SDL init success\n";
		
		// checks if the window is 0, if something fails it won't return 0:
		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		if (window != 0) //window init success
		{
			std::cout << "window creation success\n";
			renderer = SDL_CreateRenderer(window, -1, 0);
			if (renderer != 0) //renderer init success
			{
				std::cout << "renderer creation success\n";
				SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

				//ADD PICTURE TO WINDOW (//Create an assets folder in which the images we want to use are stored.)
				SDL_Surface* tempSurface = SDL_LoadBMP("assets/img1.bmp"); //не работи
				texture = SDL_CreateTextureFromSurface(renderer, tempSurface);
				SDL_FreeSurface(tempSurface);

				SDL_QueryTexture(texture, NULL, NULL, &sourceRectangle.w, &sourceRectangle.h);

				//where it stands (0 0 is the upper left corner)
				destinationRectangle.x = sourceRectangle.x = 0; 
				destinationRectangle.y = sourceRectangle.y = 0;

				//Optional: set where it stands(100 100 px)
				//destinationRectangle.x = 100; 
				//destinationRectangle.y = 100;


				 //we want the width and height to be the same, whatever the size of the picture is, that size should be displayed on the window
				destinationRectangle.h = sourceRectangle.h;
				destinationRectangle.w = sourceRectangle.w;

			}
			else {
				std::cout << "renderer init failed\n";
				return false;
			}
		}
		else {
			std::cout << "window init failed\n";
			return false;
		}
	}
	else {
		std::cout << "SDL init fail\n";
		return false;
	}
	std::cout << "init success\n";
	running = true;
	return true;
}
void Game::render() { //clear buffer
	SDL_RenderClear(renderer);
	SDL_RenderCopy(renderer, texture, &sourceRectangle, &destinationRectangle); //to crop the picture
	//SDL_RenderCopy(renderer, texture, NULL, NULL); //thus the picture cannot move
	SDL_RenderPresent(renderer);
}
void Game::handleEvents() {
	SDL_Event event;
	if (SDL_PollEvent(&event)) {
		switch (event.type) {
		case SDL_QUIT: running = false; break;
		default: break;
		}
	}
}
void Game::update() {//for now there is nothing to update
	c++; //c is initialized at the beginning

	//this is not a good practice, better not to use it (now we only use it as an example):
	if (c % 50 == 0) 
	{
		destinationRectangle.x++;
		destinationRectangle.y++;
		sourceRectangle.x++;

	}
}

void Game::clean() {
	std::cout << "cleaning game\n";
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}
bool Game::isRunning() {
	return Game::running;
}
Game::Game() {
	Game::window = NULL;
	Game::renderer = NULL;
	Game::running = true;
	Game::sourceRectangle.x = Game::sourceRectangle.y = Game::sourceRectangle.w = Game::sourceRectangle.h = 0;
	Game::destinationRectangle.x = Game::destinationRectangle.y = Game::destinationRectangle.w = Game::destinationRectangle.h = 0;
}

Game::~Game() 
{
}