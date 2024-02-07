#include "Game2.h"
#include <iostream>

Game2* game = NULL;
const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;

int main(int argc, char* argv[]) {

	game = new Game2();

	game->init("My new window",
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		WINDOW_WIDTH, WINDOW_HEIGHT,
		SDL_WINDOW_RESIZABLE);

	while (game->isRunning()) {
		game->handleEvents();
		game->update();
		game->render();
	}

	game->clean();
	return 0;
}
