#include <SDL.h>
class Game2 {
public:
	Game2();
	~Game2();
	bool init(const char* title, int xpos, int ypos, int width, int height, int flags);
	void render(); //image loading
	void update();
	void handleEvents();
	void clean();
	bool isRunning();
private:
	SDL_Window* window = NULL;
	SDL_Renderer* renderer = NULL;
	bool running;

	SDL_Texture* texture = NULL;
	SDL_Rect sourceRectangle; //the image itself
	SDL_Rect destinationRectangle;
};