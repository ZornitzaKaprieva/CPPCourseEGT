#pragma once
#include "Game.h"

class Map
{
public:
	Map();
	~Map();

	void loadMap(int arr[25][20]);
	void drawMap();
private:
	SDL_Rect src, dest;
	SDL_Texture* red;
	SDL_Texture* orange;
	SDL_Texture* black;
	SDL_Texture* green;

	//2d interger array:
	int map[25][20];
};

