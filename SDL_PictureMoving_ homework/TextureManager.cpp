#include "TextureManager.h"

//implement LoadTexture structure:
SDL_Texture* TextureManager::loadTexture(const char* fileName)
{
    //generate the texture: 
    SDL_Surface* tempSurface = IMG_Load(fileName);
    //create the texture: 
    SDL_Texture* tex = SDL_CreateTextureFromSurface(Game::renderer, tempSurface); //instead ren 
    //clear the surface: 
    SDL_FreeSurface(tempSurface);

    return tex; //return the texture (we need to implement it in the PictureLoading.cpp)
}

void TextureManager::drawTexture(SDL_Texture* tex, SDL_Rect src, SDL_Rect dest)
{
    SDL_RenderCopy(Game::renderer, tex, &src, &dest);
}

////for sprite sheet //не работи
//void TextureManager::drawOneFrameFromTexture(SDL_Texture* tex,
//	int x, int y,
//	int width, int height,
//	int currentRow, int currentFrame,
//	SDL_Renderer* ren,
//	SDL_RendererFlip flip)
//{
//	SDL_Rect srcRect;
//	SDL_Rect destRect;
//	srcRect.x = width * currentFrame;
//	srcRect.y = height * (currentRow - 1);
//	srcRect.w = destRect.w = width;
//	srcRect.h = destRect.h = height;
//	destRect.x = x;
//	destRect.y = y;
//
//	SDL_RenderCopyEx(Game::renderer, tex, &srcRect, &destRect, 0, 0, flip);
//}
