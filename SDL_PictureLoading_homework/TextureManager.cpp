#include "TextureManager.h"

//implement LoadTexture structure:
SDL_Texture* TextureManager::LoadTexture(const char* fileName, SDL_Renderer* ren)
{
    //generate the texture: 
    SDL_Surface* tempSurface = IMG_Load(fileName);
    //create the texture: 
    SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, tempSurface);
    //clear the surface: 
    SDL_FreeSurface(tempSurface);

    return tex; //return the texture (we need to implement it in the PictureLoading.cpp)
}

