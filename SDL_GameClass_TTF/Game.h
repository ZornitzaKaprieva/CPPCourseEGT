#pragma once
#include <SDL.h>
#include <SDL_ttf.h>

class Game {
public:
	Game();
	~Game();
	bool init(const char* title, int xpos, int ypos, int width, int height, int flags);
	bool ttf_init(); //initialize ttf (for text)
	void render();
	void update();
	void handleEvents();
	void clean();
	bool isRunning();
	bool isClickableTextureClicked(SDL_Texture* t, SDL_Rect* r, int xDown, int yDown, int xUp, int yUp); //For the texture, there should be x, y - coordinates of the click and release of the mouse. The idea is to see if when the button is pressed it matches the location of the texture (SDL_Rect* - to capture where the texture is, not just how big it is)
private:
	SDL_Window* window = NULL;
	SDL_Renderer* renderer = NULL;
	bool running;
	SDL_Texture* textTextureFont1,
		* textTextureFont2,
		* textTextureFont1Wrapped,
		* textTextureFont2Wrapped; //creating 4 textures
	SDL_Rect dRectFont1, dRectFont2, dRectFont1Wrapped, dRectFont2Wrapped; 	//creating 4 textures destRect

	// we want to check if we clicked on a specific texture:
	SDL_Texture* clickableTexture;
	SDL_Rect clickableRect;
	int mouseDownX, mouseDownY;

};