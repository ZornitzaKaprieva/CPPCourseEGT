#include "Game.h"

Game* game = nullptr;
Player* player = nullptr;

int main(int argc, char* argv[])
{
	game = new Game();

	while (game->isRun() && game->isNotOver())
	{
		game->update();
	}
	return 0;
}