#include "Game.h"
#include <iostream>

Game::Game() {
	Game::window = NULL;
	Game::renderer = NULL;
	Game::running = true;
	Game::sourceRectangle.x = Game::sourceRectangle.y = Game::sourceRectangle.w = Game::sourceRectangle.h = 0;
	Game::destinationRectangle.x = Game::destinationRectangle.y = Game::destinationRectangle.w = Game::destinationRectangle.h = 0;
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


				// loading texture using static TextureManager* Instance()
				TextureManager::Instance()->loadTexture("assets/happyDog1.jpg", "happyDog1", renderer); //file, id, render
				TextureManager::Instance()->loadTexture("assets/happyDog2.jpg", "happyDog2", renderer); //file, id, render
				TextureManager::Instance()->loadTexture("assets/happyDog3.jpg", "happyDog3", renderer); //file, id, render
				TextureManager::Instance()->loadTexture("assets/happyDog4.jpg", "happyDog4", renderer); //file, id, render
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
	
	int ww, wh;
	SDL_GetWindowSize(window, &ww, &wh); //what is the size of this window
	
	//from TextureManager:
	
	TextureManager::Instance()->drawTexture("happyDog1", 0, wh/2 - 133, 200, 133, renderer); //keyword, coordinate, coordinate, size, size, renderer
	TextureManager::Instance()->drawTexture("happyDog2", ww - 200, wh / 2 - 200, 200, 200, renderer);
	TextureManager::Instance()->drawTexture("happyDog3", 0, wh - 133, 200, 133, renderer);
	TextureManager::Instance()->drawTexture("happyDog4", ww - 250, wh - 168, 250, 166, renderer, SDL_FLIP_HORIZONTAL);
	
	//draw a shape
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
		case SDL_MOUSEBUTTONDOWN:
			int mx, my;
			int w, h;
			SDL_GetWindowSize(window, &w, &h);
			std::cout << "Screen size: " << w << " / " << h << " ";

			SDL_GetMouseState(&mx, &my); //mouse coordinates
			std::cout << "Coordinates: " << mx << " / " << my << std::endl;

			//to define the coordinates on which, when clicked, the particular image is displayed:
			if (mx < w / 2 && my < h / 2) {
				
				TextureManager::Instance()->switchVisibility("happyDog1");

			}
			else if (mx > w / 2 && mx <= w && my < h / 2) {

				
				TextureManager::Instance()->switchVisibility("happyDog2");
			}
			else if (mx < w / 2 && my > h / 2 && my <= h) {

				TextureManager::Instance()->switchVisibility("happyDog3");
			}
			else if (mx > w / 2 && mx <= w && my > h / 2 && my <= h) {

				TextureManager::Instance()->switchVisibility("happyDog4");
			}
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