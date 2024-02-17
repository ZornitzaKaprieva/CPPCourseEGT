#include "Game.h"
#include <iostream>

Game::Game() {
	Game::window = NULL;
	Game::renderer = NULL;
	Game::running = true;
}

bool Game::init(const char* title, int xpos, int ypos, int width, int height, int flags) {
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) { 
		std::cout << "SDL init success\n";

		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		if (window != 0) //window init success
		{
			std::cout << "window creation success\n";
			renderer = SDL_CreateRenderer(window, -1, 0);
			if (renderer != 0) //renderer init success
			{
				std::cout << "renderer creation success\n";
				SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
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
	SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255); // set window color
	SDL_RenderClear(renderer);
	
	//draw a shape
	int ww, wh;
	SDL_GetWindowSize(window, &ww, &wh); //what is the size of this window

	SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);

	//draw a line with coordinates of where to start and where to go
	SDL_RenderDrawLine(renderer, 0, wh / 2, ww, wh / 2);
	SDL_RenderDrawLine(renderer, ww / 2, 0, ww / 2, wh);

	SDL_RenderPresent(renderer);
}

void Game::handleEvents() {
	SDL_Event event;
	if (SDL_PollEvent(&event)) {
		switch (event.type) {
		case SDL_QUIT: running = false; break; //by clicking x on the window
		default: break;
		}
	}
}

void Game::update()
{
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

Game::~Game() {
}