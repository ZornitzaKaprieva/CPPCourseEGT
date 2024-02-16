#include "Game2.h"
#include <iostream>

Game2::Game2() {
	Game2::window = NULL;
	Game2::renderer = NULL;
	Game2::running = true;
	Game2::sourceRectangle.x = Game2::sourceRectangle.y = Game2::sourceRectangle.w = Game2::sourceRectangle.h = 0;
	Game2::destinationRectangle.x = Game2::destinationRectangle.y = Game2::destinationRectangle.w = Game2::destinationRectangle.h = 0;
	Game2::currentFrame = NULL; //4 for 5th frame etc
}

bool Game2::init(const char* title, int xpos, int ypos, int width, int height, int flags) {
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) { // if == 0 - succsessfuly initilized the SDL subsystem
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


				// loading texture using static TextureManager* Instance()
				TextureManager::Instance()->loadTexture("assets/happyDog.jpg", "happyDog", renderer); //file, id, render
				TextureManager::Instance()->loadTexture("assets/porfDog.jpg", "porfDog", renderer);
				TextureManager::Instance()->loadTexture("assets/Sprite-Sheet.jpg", "Sprite-Sheet", renderer);

				//ADD PICTURE TO WINDOW: del because of TextureManager (look for more in SDL_GameClass (gitHub))
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

void Game2::render() { //clear buffer
	SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255); // set window color
	SDL_RenderClear(renderer);
	//SDL_RenderCopy(renderer, texture, &sourceRectangle, &destinationRectangle); //to crop
	//from TextureManager:
	TextureManager::Instance()->drawOneFrameFromTexture("Sprite-Sheet", 0, 0, 130, 130, 2, currentFrame, renderer);// keyword, coordinate, coordinate, size, size, rows we want to use(1, 2 etc), currentframe, render
	//TextureManager::Instance()->drawOneFrameFromTexture("Sprite-Sheet", 0, 150, 130, 130, 1, currentFrame, renderer, SDL_FLIP_HORIZONTAL);
	//TextureManager::Instance()->drawTexture("happyDog", 0, 0, 200, 133, renderer); //keyword, coordinate, coordinate, size, size, renderer
	TextureManager::Instance()->drawTexture("happyDog", 620, 460, 200, 133, renderer, SDL_FLIP_HORIZONTAL);
	//TextureManager::Instance()->drawTexture("porfDog", 0, 250, 200, 133, renderer);
	//TextureManager::Instance()->drawTexture("porfDog", 0, 500, 200, 133, renderer, SDL_FLIP_HORIZONTAL);

	//draw shape
	int ww, wh;
	SDL_GetWindowSize(window, &ww, &wh); //what is the size of this window
	SDL_Rect fillRect = { ww / 4, wh / 4, ww / 2, wh / 2 }; //SDL_Rect contains x, y, w, h
	SDL_SetRenderDrawColor(renderer, 0xFF, 0x00, 0x00, 0xFF);
	SDL_RenderFillRect(renderer, &fillRect);

	//second rectangle (outline)
	SDL_Rect outlineRect = { ww / 6, wh / 6, ww * 2 / 3, wh * 2 / 3 };
	SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0xFF, 0x00);
	SDL_RenderDrawRect(renderer, &outlineRect);

	//draw a line
	SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0xFF, 0xFF);
	SDL_RenderDrawLine(renderer, 0, wh / 2, ww, wh / 2);//coordinates of where to start and where to go: located in the middle on the far left

	//draw dashed line:
	SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0x00, 0xFF);
	for (int i = 0; i < wh; i += 4) { //a loop is used to loop through the points and display the empty space
		SDL_RenderDrawPoint(renderer, ww / 2, i);
	}

	//draw a circle:
	SDL_SetRenderDrawColor(renderer, 0xFF, 0x00, 0xFF, 0xFF);
	Shapes::drawCircle(renderer, ww / 2, wh / 2, wh / 2 - 10);
	SDL_RenderPresent(renderer);
}

void Game2::handleEvents() {
	SDL_Event event;
	if (SDL_PollEvent(&event)) {
		switch (event.type) {
		case SDL_QUIT: running = false; break; //by clicking x on the window
		default: break;
		}
	}
}

void Game2::update()
{
	//we can set currentFrame to achieve the animation effect
	currentFrame = int(((SDL_GetTicks() / 200) % 5)); //if we replace 200 with 100 it will be 2x faster // % 5 - so many frames (in Sprite-Sheet.jpg there are 5 (per line))

	////Different Frames:
	//std::cout << "SDL_TICKS           :" << SDL_GetTicks() << "\n"; //âðúùà áð. ìèëèñåö îòêàêòî å èíèöèàëèçðàí ôðåéìà â áèáëèîòåêàòà
	//std::cout << "SDL_TICKS / 100     :" << int(SDL_GetTicks() / 100) << "\n"; //???èãíîðèðàìå öèôðèòå íà 1-öèòå è äåñåòèöèòå. => òîâà ÷èñëî ñå ïðîìåíÿ íà 
	//std::cout << "SDL_TICKS / 100 % 10: " << int(((SDL_GetTicks() / 100) % 10)) << "\n\n";
}
void Game2::clean() {
	std::cout << "cleaning game\n";
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}

bool Game2::isRunning() {
	return Game2::running;
}

Game2::~Game2() {
}