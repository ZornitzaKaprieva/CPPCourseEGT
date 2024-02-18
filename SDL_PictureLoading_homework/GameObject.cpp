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
	//SDL_GetWindowSize() //640, 800

	//for movement:
	//xpos++;
	//ypos++;

	if (xpos <= 550)
	{
		xpos++;
		std::cout << "xpos++: " << xpos << std::endl;

	}
	else //if (xpos > 60)
	{
		xpos--;
		std::cout << "xpos--: " << xpos << std::endl;
	}

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

GameObject::~GameObject()
{
}
