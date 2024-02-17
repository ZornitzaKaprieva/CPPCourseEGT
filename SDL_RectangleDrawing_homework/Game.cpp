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

	int wwRect1 = ww / 8;
	int whRect2 = wh / 8;
	double rectW = ww / 1.5;
	double rectH = wh / 1.5;
	double border = 20; // "border" specifies how big the rectangle's "frame" should be

	// rectangle1 (filled)
	SDL_Rect fillRect = { wwRect1, whRect2, rectW, rectH }; //SDL_Rect contains x, y, w, h
	SDL_SetRenderDrawColor(renderer, 0, 73, 83, 0);
	SDL_RenderFillRect(renderer, &fillRect);


	// rectangle2 (white)
	SDL_Rect fillRectWhite = { wwRect1 + border , whRect2 + border, rectW - border * 2 , rectH - border * 2 }; //we change the line thickness by changing the size of a rectangle
	SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
	SDL_RenderFillRect(renderer, &fillRectWhite);


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