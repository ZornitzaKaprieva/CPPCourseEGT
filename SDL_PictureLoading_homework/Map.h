#pragma once

#include "Game.h"


class Map
{
public:
	Map();
	~Map();

	void loadMap(int arr[20][25]);
	void drawMap();
private:
	SDL_Rect src, dest;
	SDL_Texture* field;
	SDL_Texture* border;
	SDL_Texture* out;
	SDL_Texture* basket;



	//2d interger array:
	int map[20][25];
};

