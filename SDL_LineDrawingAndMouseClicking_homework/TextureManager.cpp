#include "TextureManager.h"

TextureManager* TextureManager::instance = 0; //because of static TextureManager* Instance()

bool TextureManager::loadTexture(const char* fileName, std::string id, SDL_Renderer* ren) {
	SDL_Surface* tempSurface = IMG_Load(fileName);
	if (tempSurface == 0)
		return false;  // if something went wrong
	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, tempSurface);
	SDL_FreeSurface(tempSurface);
	if (tex != 0) {  
		textureMap[id] = tex; //std::map<std::string, SDL_Texture*> textureMap;
		return true;
	}
	return false; // if something went wrong
}

void TextureManager::drawTexture(std::string id,
	int x, int y,
	int width, int height,
	SDL_Renderer* ren,
	SDL_RendererFlip flip) 
{
	if (visibility[id] == true)  // for more: bool TextureManager::switchVisibility(std::string id)
	{
		SDL_Rect srcRect;
		SDL_Rect destRect;
		srcRect.x = srcRect.y = 0;
		srcRect.w = destRect.w = width;
		srcRect.h = destRect.h = height;
		destRect.x = x;
		destRect.y = y;
		SDL_RenderCopyEx(ren, textureMap[id], &srcRect, &destRect, 0, 0, flip);
	}
}

bool TextureManager::switchVisibility(std::string id)
{
	if (visibility[id] = true) //if the image is visible, it should be hidden on next click
	{

		visibility[id] = false;
	}

	return visibility[id] = true;
}
