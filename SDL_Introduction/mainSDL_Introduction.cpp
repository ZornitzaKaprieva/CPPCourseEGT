#include<SDL.h>
#include<iostream>
using std::cout;
using std::endl;
using namespace std;

//we can set how often to run this loop (on events)

const int FPS = 30; //will execute 30 times per second
void limitFPS(Uint32 startingTick) //sec that have elapsed since library initialization. This value is constantly increasing. This is a snapshot of what the value was at the beginning (sort of like a stopwatch that counts down when it started)
{
	if ((1000 / FPS) - (SDL_GetTicks() - startingTick)); //SDL_GetTicks counts the number of seconds (what millisecond we are in)
}

//Explanation:
//We have a duration of 100 milliseconds, but the loop takes 20 milliseconds. 
// We want to wait for the remaining 80 milliesc and not cycle again 
// (ie. how many seconds to rest before looping again)

int main(int argc, char* args[])
{
	//initialize the sdl library (subsystems). Accepts flags (more special parameter - can be boolean, byte, etc.):
	SDL_Init(SDL_INIT_EVERYTHING);
	//printf("Hello, World!");;

	//create a window:
	SDL_Window* window = NULL;
	window = SDL_CreateWindow("Zornitza", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, 0); // 0 instead SDL_WINDOW_SHOWN

	//the renderer's function is to draw on the screen:
	SDL_Renderer* renderer = NULL;
	renderer = SDL_CreateRenderer(window, -1, 0); //-1: finds the first one that works and uses it

	SDL_SetRenderDrawColor(renderer, 255, 0, 255, 50); //takes the render as a parameter, then the rgb values, then how transparent it should be (opacity)

	SDL_RenderClear(renderer);

	//things that are drawn on the screen are written to a buffer, SDL_RenderPresent(renderer) prints everything from the buffer, and clear clears that buffer and sets the color to draw on the screen
	SDL_RenderPresent(renderer); // not only to set a renderer but also to draw

	//SDL_Delay(3000); //how long to stay on the screen

	//If we want to stay on the screen until we click the x:
	bool running = true;
	SDL_Event event; // everything that happens is an event (mouse click, button click, etc.)

	//while (running) struggles to spin as fast as the machine will allow. 
	// In order not to overload the machine, we can limit how often the function spins 
	// (with function - void limitFPS(Uint32 startingTick)).
	//In this case, 30 frames per second: 1000 / 30 - this is the min time we want this body to run and we check if the elapsed time is greater than the start and end of the loop, sdl_getTicks->ie.whether the elapsed time is greater than the performance.
	//if we want 100ms per frame and the frame runs for 20ms (delay = 100 - 20 = 80ms)

	Uint32 startingTick;
	while (running)
	{
		startingTick = SDL_GetTicks();
		while (SDL_PollEvent(&event)) //to read the events we call SDL_PollEvent. if there are events we haven't read, it shows us them
		{
			if (event.type == SDL_QUIT) // by clicking x - exit event;
			{
				running = false;
				break;
			}
		}
		limitFPS(startingTick);
	}

	SDL_DestroyWindow(window); // clear the window from memory
	SDL_Quit(); // function: clear sdl from memory

	return 0;
}
