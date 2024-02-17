#pragma once
#include "Game.h"
#include <string>
#include <map>

class TextureManager {

public:
	static TextureManager* Instance() //static avoids the need to create an object to access the method:
	{
		if (instance == 0)
		{
			instance = new TextureManager();
			return instance;
		}
		return instance;
	}

	//when render initialization succeeds, we load a texture and pass the filename, id, and render as parameters
	bool loadTexture(const char* fileName, std::string id, SDL_Renderer* ren); //
	
	//to draw texture: pass keyword (from map for easier texture loading), coordinates (x, y), size (width, height) and render as parameters
	void drawTexture(std::string id,
		int x, int y,
		int width, int height,
		SDL_Renderer* ren,
		SDL_RendererFlip flip = SDL_FLIP_NONE); //SDL_FLIP_NONE to be used as the default value

	//takes the texture keyword as a parameter and changes the visibility:
	bool switchVisibility(std::string id);

private:
	TextureManager() {} //will only be used in this class, it doesn't have to be public.
	static TextureManager* instance; //will use in static TextureManager* Instance()
	std::map<std::string, SDL_Texture*> textureMap; //for easier texture loading
	std::map<std::string, bool> visibility; //takes the texture keyword and a boolean value for visibility
};