#include "PictureLoading.h"

PictureLoading* game = nullptr;

int main(int argc, char* argv[])
{
	const int FPS = 60; //target frame
	const int frameDelay = 1000 / FPS; //max time we have between frames (how long the frame is meant to take)
	
	Uint32 frameStart; //how long be running the game 
	int frameTime;

	game = new PictureLoading();
	game->init("GameWindow", 800, 600, false);

	while (game->running())
	{
		frameStart = SDL_GetTicks(); //the number of milliseconds since the SDL library initialized.
		game->handleEvents();
		game->update();
		game->render();

		frameTime = SDL_GetTicks() - frameStart; //how long it takes to handling the events, update the objects, and render them
		if (frameDelay > frameTime) //check if we need to delay this frame
		{
			SDL_Delay(frameDelay - frameTime); 
		}
	}

	game->clean();
	return 0;
}