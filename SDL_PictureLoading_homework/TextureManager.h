#pragma once
#include "PictureLoading.h"
#include <string>
#include <map>

class TextureManager {
public:
	static SDL_Texture* LoadTexture(const char* fileName, SDL_Renderer* ren); //this function will return the texture we set

};