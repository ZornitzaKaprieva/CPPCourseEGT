#include "Game.h"
#include <iostream>

Game::Game() {
	//if they are only declared, it's not clear what data is inside and to be safer it asks for initialization in the constructor
	Game::window = NULL;
	Game::renderer = NULL;
	Game::running = true;

	Game::dRectFont1 = { 0, 0, 0, 0 }; //ordinary variable => {...}
	Game::dRectFont2 = { 0, 0, 0, 0 };
	Game::dRectFont1Wrapped = { 0, 0, 0, 0 };
	Game::dRectFont2Wrapped = { 0, 0, 0, 0 };
	Game::textTextureFont1 = NULL; //pointers => NULL
	Game::textTextureFont2 = NULL;
	Game::textTextureFont1Wrapped = NULL;
	Game::textTextureFont2Wrapped = NULL;
}

bool Game::init(const char* title, int xpos, int ypos, int width, int height, int flags) {

	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
		std::cout << "SDL init success\n";

		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		if (window != 0) //window init success
		{
			std::cout << "window creation success\n";
			renderer = SDL_CreateRenderer(window, -1, 0);
			if (renderer != 0) //renderer init success
			{
				std::cout << "renderer creation success\n";
				SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

			}
			else {
				std::cout << "renderer init failed\n";
				return false;
			}
		}
		else {
			std::cout << "window init failed\n";
			return false;
		}
	}
	else {
		std::cout << "SDL init fail\n";
		return false;
	}
	std::cout << "init success\n";
	running = true;
	return true;
}

bool Game::ttf_init()
{
	//initialize:
	if (TTF_Init() == -1) //if it returns -1, there is a problem
	{
		return false;
	}

	//if everything is ok we can load our fonts
	TTF_Font* font1 = TTF_OpenFont("fonts/Arcade.ttf", 48); //font path + size
	TTF_Font* font2 = TTF_OpenFont("fonts/segoepr.ttf", 48);

	//we check if the fonts are initialized correctly, if one returns null something went wrong
	if (font1 == NULL || font2 == NULL)
	{
		return false;
	}

	//set fonts as image => texture first:
	SDL_Surface* tempSurfaceText = NULL;
	tempSurfaceText = TTF_RenderText_Blended(font1, "Hello World", { 0, 0, 255, 255 }); //accepts the font, text and color we want to print
	textTextureFont1 = SDL_CreateTextureFromSurface(renderer, tempSurfaceText);

	//we can reuse a surface for the rest of the textures
	tempSurfaceText = TTF_RenderText_Blended(font2, "Hello World", { 0, 0, 255, 255 });
	textTextureFont2 = SDL_CreateTextureFromSurface(renderer, tempSurfaceText);

	//if the text is very long and there is a danger that it will go out of the screen, then we should set that we want it to be automatically displayed on several lines. Here we have another parameter that says what the maximum line length should be.
	// If we want to break to a new line before that, we add \n
	tempSurfaceText = TTF_RenderText_Blended_Wrapped(font1, "Hello World\nThis wraps the text", { 0, 255, 0, 255 }, 300); //accepts the font, text and color we want to print
	textTextureFont1Wrapped = SDL_CreateTextureFromSurface(renderer, tempSurfaceText);

	tempSurfaceText = TTF_RenderText_Blended_Wrapped(font2, "Hello World\nThis wraps the text", { 0, 255, 255, 255 }, 500); //accepts the font, text and color we want to print
	textTextureFont2Wrapped = SDL_CreateTextureFromSurface(renderer, tempSurfaceText);

	//new: to check дали сме кликнали на текстурата
	tempSurfaceText = TTF_RenderText_Blended(font1, "CLICK", { 255, 0, 0, 255 });
	clickableTexture = SDL_CreateTextureFromSurface(renderer, tempSurfaceText);

	//now we have the 4 (+1) textures, all that's left to do is set them up to figure out which text goes in which position
	int tw, th;

	//textTextureFont1 - we want to know how wide and long this texture is
	//0, 0, we don't need 0 format and access, so we set them to 0
	//tw and th have the values of the texture we passed in so we know them

	SDL_QueryTexture(textTextureFont1, 0, 0, &tw, &th); //set the same parameters to avoid font disproportion
	dRectFont1 = { 10, 10, tw, th }; //2 coordinates where to draw, width and height

	SDL_QueryTexture(textTextureFont2, 0, 0, &tw, &th);
	dRectFont2 = { 10, 320, tw, th };

	SDL_QueryTexture(textTextureFont1Wrapped, 0, 0, &tw, &th);
	dRectFont1Wrapped = { 650, 10, tw, th };

	SDL_QueryTexture(textTextureFont2Wrapped, 0, 0, &tw, &th);
	dRectFont2Wrapped = { 650, 320, tw, th };

	SDL_QueryTexture(clickableTexture, 0, 0, &tw, &th);
	int ww, wh;
	SDL_GetWindowSize(window, &ww, &wh);
	clickableRect = { ww / 2 - tw / 2, wh / 2 - th / 2, tw, th }; //to center in the screen with the texture size
	SDL_FreeSurface(tempSurfaceText);
	TTF_CloseFont(font1);
	TTF_CloseFont(font2);

	return true;
}

void Game::render() {
	SDL_RenderClear(renderer);

	//displaying fonts on the screen is done in the same way as displaying images
	SDL_RenderCopy(renderer, textTextureFont1, NULL, &dRectFont1);
	SDL_RenderCopy(renderer, textTextureFont2, NULL, &dRectFont2);
	SDL_RenderCopy(renderer, textTextureFont1Wrapped, NULL, &dRectFont1Wrapped);
	SDL_RenderCopy(renderer, textTextureFont2Wrapped, NULL, &dRectFont2Wrapped);
	//clickableTexture: 
	SDL_RenderCopy(renderer, clickableTexture, NULL, &clickableRect);

	SDL_RenderPresent(renderer);
}

bool Game::isClickableTextureClicked(SDL_Texture* t, SDL_Rect* r, int xDown, int yDown, int xUp, int yUp)
{
	int tw, th;
	SDL_QueryTexture(t, 0, 0, &tw, &th);

	// оординатите на rect са от x do x + ширината и надолу - от y до y + височината
	/*(r->x) (r->x + tw)
	  (r->y) (r->y + th) */
	  //check if the arrow coordinates (when the keyboard button is pressed and then released) are in the texture coordinates

	if ((xDown > r->x && xDown < (r->x + tw)) && (xUp > r->x && xUp < (r->x + tw)) &&
		(yDown > r->y && yDown < (r->y + th)) && (yUp > r->y && yUp < (r->y + th)))
	{
		return true;
	}

	return false;
}

void Game::handleEvents() { //add interactions

	//for each event - a new case:
	SDL_Event event;
	if (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		case SDL_QUIT: //quit event: 
			running = false;
			break;

		case SDL_MOUSEBUTTONDOWN: //which button is pressed (but not yet released)
		{
			std::cout << "mouse button down\n" << std::endl;

			int msx, msy;
			if (event.button.button == SDL_BUTTON_LEFT) //event.button.button  = mouse button have button (member of memeber)
			{
				//for each action - a new if
				SDL_GetMouseState(&msx, &msy); //we can print the coordinates
				std::cout << msx << ":" << msy << "\n";
				std::cout << "mouse button left\n" << std::endl;
				mouseDownX = msx;
				mouseDownY = msy;
			}
		};
		break;

		case SDL_MOUSEBUTTONUP: //releasing the button
		{
			std::cout << "mouse button down\n" << std::endl;
			int msx, msy;

			//if (event.button.button == SDL_BUTTON_RIGHT) //event.button.button на mouse button ima button, zatowa izglevda raka (мембер н амемебер)
			//{
			//	//за вс€ко действие - нов иф
			SDL_GetMouseState(&msx, &msy); //можем да изпечатаме координатите
			//	std::cout << msx << ":" << msy << "\n";
			//	std::cout << "mouse button left\n" << std::endl;
			std::cout << (isClickableTextureClicked(clickableTexture, &clickableRect, mouseDownX, mouseDownY, msx, msy) ? "CLICKED" : "NOT CLICKED");

		};
		break;

		//we can also make keyboard key cases : (step 1 press the key; step 2: release the key;

		//if we press left we want the x coordinate to decrease 
		// if we press right we want the x coordinate to increase 
		//if we press up we want the y coordinate to decrease 
		// if we press down we want the y coordinate to increase 

		case SDL_KEYDOWN: {
			if (event.key.keysym.sym == SDLK_LEFT) {
				std::cout << "left pressed\n";
				dRectFont1.x--;
			}
			if (event.key.keysym.sym == SDLK_RIGHT) {
				std::cout << "right pressed\n";
				dRectFont1.x++;
			}
			if (event.key.keysym.sym == SDLK_UP) {
				std::cout << "up pressed\n";
				dRectFont1.y--;
			}
			if (event.key.keysym.sym == SDLK_DOWN) {
				std::cout << "down pressed\n";
				dRectFont1.y++;
			}
		}; break;

		case SDL_KEYUP:
		{
		}; break;

		case SDL_MOUSEMOTION: {
			std::cout << event.motion.x << ":" << event.motion.y << std::endl;
			std::cout << event.motion.x << ":" << event.motion.y << std::endl;

			//if we don`t want to center the mouse:
			/*dRectFont2.x = event.motion.x;
			dRectFont2.y = event.motion.y;*/

			//if we want to center the mouse:
			dRectFont2.x = event.motion.x - dRectFont2.w / 2;
			dRectFont2.y = event.motion.y - dRectFont2.h / 2;

		}; break;

		default: break;
		}
	}
}

void Game::update()
{
}

void Game::clean()
{
	std::cout << "cleaning game\n";
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}

bool Game::isRunning()
{
	return Game::running;
}

Game::~Game()
{
	delete window;
	delete renderer;
}