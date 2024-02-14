#include "Game.h"

Game* game = nullptr;
Player* player = nullptr;

int main(int argc, char* argv[])
{
	game = new Game();

	while (game->isRun() && !game->isOver())
	{
		game->update();
	}
	return 0;
}