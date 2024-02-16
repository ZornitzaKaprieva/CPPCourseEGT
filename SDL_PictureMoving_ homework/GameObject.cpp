#include "GameObject.h"
#include "TextureManager.h"

GameObject::GameObject(const char* textureSheet, int x, int y)
{
	objTexture = TextureManager::loadTexture(textureSheet); //no need for ren

	xpos = x;
	ypos = y;

	//currentFrame = NULL; //4 for 5th frame etc
}

void GameObject::updateObj()
{
	
	//for movement:
/*xpos++;
ypos++; */

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
	SDL_RenderCopy(Game::renderer, objTexture, &srcRect, &destRect);
}

void GameObject::moveUP()
{
	ypos--;
	std::cout << "Moving up\n";
}

void GameObject::moveDown()
{
	ypos++;
	std::cout << "Moving down\n";
}

void GameObject::moveLeft()
{
	xpos--;
	std::cout << "Moving left\n";
}

void GameObject::moveRight()
{
	xpos++;
	std::cout << "Moving right\n";
}

GameObject::~GameObject()
{
}
