#include "PictureLoading.h"

//own movement for any object
class GameObject
{
public:
	GameObject(const char* textureSheet, SDL_Renderer* ren, int x, int y); //��� ������ �� ��������
	~GameObject();

	void updateObj();
	void renderObj(); //specific behavior

private:
	int xpos; //���� ������ �� �������� ������ �� ������
	int ypos;
	int cnt = 0; //for movement
	SDL_Texture* objTexture;
	SDL_Rect srcRect, destRect; //�� ����������� 
	SDL_Renderer* renderer; //
};

