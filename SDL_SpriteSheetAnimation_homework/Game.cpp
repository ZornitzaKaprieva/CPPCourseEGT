#include "Game.h"
#include <iostream>

Game::Game() {
	Game::window = NULL;
	Game::renderer = NULL;
	Game::running = true;
	Game::sourceRectangle.x = Game::sourceRectangle.y = Game::sourceRectangle.w = Game::sourceRectangle.h = 0;
	Game::destinationRectangle.x = Game::destinationRectangle.y = Game::destinationRectangle.w = Game::destinationRectangle.h = 0;
	Game::currentFrame = NULL; //4 for 5th frame etc
}

bool Game::init(const char* title, int xpos, int ypos, int width, int height, int flags) {
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) { // if == 0 - succsessfuly initilized the SDL subsystem
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

				TextureManager::Instance()->loadTexture("assets/Sprite-Sheet.jpg", "Sprite-Sheet", renderer);

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

	//from TextureManager:
	TextureManager::Instance()->drawOneFrameFromTexture("Sprite-Sheet", 0, 0, 130, 130, 2, currentFrame, renderer);// keyword, coordinate, coordinate, size, size, rows we want to use(1, 2 etc), currentframe, render
	//TextureManager::Instance()->drawOneFrameFromTexture("Sprite-Sheet", 0, 150, 130, 130, 1, currentFrame, renderer, SDL_FLIP_HORIZONTAL);


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
	//we can set currentFrame to achieve the animation effect
	currentFrame = int(((SDL_GetTicks() / 200) % 5)); //if we replace 200 with 100 it will be 2x faster // % 5 - so many frames (in Sprite-Sheet.jpg there are 5 (per line))

	////Different Frames:
	//std::cout << "SDL_TICKS           :" << SDL_GetTicks() << "\n"; //връща бр. милисец откакто е инициализран фрейма в библиотеката
	//std::cout << "SDL_TICKS / 100     :" << int(SDL_GetTicks() / 100) << "\n"; //???игнорираме цифрите на 1-ците и десетиците. => това число се променя на 
	//std::cout << "SDL_TICKS / 100 % 10: " << int(((SDL_GetTicks() / 100) % 10)) << "\n\n";
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