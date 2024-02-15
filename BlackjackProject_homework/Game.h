#pragma once

#include<SDL.h>
#include <SDL_image.h> 
#include <iostream>

class Game
{
public:
	Game();
	~Game();
	void init(const char* title, int width, int height, bool fullscreen);
	void handleEvents();
	void update(); //to make all game objects updateable 
	void render(); //to load a visualization 
	void clean(); //to free memory 

	bool running() { return this->isRunning; } //n/o

	void loadAndPlaySound();

	static SDL_Renderer* renderer; // Instead of copying the renderer for each object
private:
	bool isRunning = false;
	
	int cnt = 0;
	SDL_Window* window;
	//SDL_Renderer* renderer; //no need because of static SDL_Renderer* renderer;


};

