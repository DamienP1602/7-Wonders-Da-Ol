#include "Game.h"

int main()
{
	Game _game;

	locale::global(locale(""));
	srand(static_cast<unsigned int>(time(nullptr)));

	_game.Start();
	_game.Update();
	_game.Stop();

	return 0;
}