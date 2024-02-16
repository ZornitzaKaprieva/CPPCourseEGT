#pragma once
#include "Game.h"
#include <string>
#include <map>

class TextureManager {
public:
	static SDL_Texture* loadTexture(const char* fileName); //this function will return the texture we set (no need to initialize ren (SDL_Renderer* ren)
	static void drawTexture(SDL_Texture* tex, SDL_Rect src, SDL_Rect dest);

	static TextureManager* Instance()
	{
		if (instance == 0)
		{
			instance = new TextureManager();
			return instance;
		}
		return instance;
	}
private:
	static TextureManager* instance;
};