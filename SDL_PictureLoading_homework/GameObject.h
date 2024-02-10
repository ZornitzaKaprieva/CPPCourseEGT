#include "PictureLoading.h"

//own movement for any object
class GameObject
{
public:
	GameObject(const char* textureSheet, SDL_Renderer* ren, int x, int y); //кой рендер ще ползваме
	~GameObject();

	void updateObj();
	void renderObj(); //specific behavior

private:
	int xpos; //къде искаме да поставим обекта на екрана
	int ypos;
	int cnt = 0; //for movement
	SDL_Texture* objTexture;
	SDL_Rect srcRect, destRect; //за дисплейване 
	SDL_Renderer* renderer; //
};

