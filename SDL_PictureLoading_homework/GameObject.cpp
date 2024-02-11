#include "GameObject.h"
#include "TextureManager.h"

GameObject::GameObject(const char* textureSheet, int x, int y)
{
	objTexture = TextureManager::loadTexture(textureSheet); //no need for ren

	xpos = x;
	ypos = y;
}

void GameObject::updateObj()
{
	//for movement:
	xpos++;
	ypos++;

	srcRect.h = 32; //32
	srcRect.w = 32; //32
	srcRect.x = 0; //0
	srcRect.y = 0; //0

	destRect.x = xpos;
	destRect.y = ypos;
	destRect.w = srcRect.w * 2;// / 2;
	destRect.h = srcRect.h * 2;// / 2;
}

void GameObject::renderObj()
{
	SDL_RenderCopy(PictureLoading::renderer, objTexture, &srcRect, &destRect);
}

GameObject::~GameObject()
{
}
