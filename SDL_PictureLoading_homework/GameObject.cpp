#include "GameObject.h"
#include "TextureManager.h"

GameObject::GameObject(const char* textureSheet, SDL_Renderer* ren, int x, int y)
{
	renderer = ren;
	objTexture = TextureManager::LoadTexture(textureSheet, ren);

	xpos = x;
	xpos = y;
}

void GameObject::updateObj()
{
	//for movement:
	xpos++;
	//ypos++;

	srcRect.h = 200; //32
	srcRect.w = 200; //32
	srcRect.x = 0; //0
	srcRect.y = 0; //0

	destRect.x = xpos;
	destRect.y = ypos;
	destRect.w = srcRect.w /2 ;// *2;
	destRect.h = srcRect.h / 2; //*2;
}

void GameObject::renderObj()
{
	SDL_RenderCopy(renderer, objTexture, &srcRect, &destRect);
}

GameObject::~GameObject()
{
}
