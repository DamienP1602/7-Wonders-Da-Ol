#include <SFML/Graphics.hpp>

#include "Game.h"

using namespace sf;

int main()
{
	locale::global(locale(""));
	srand(static_cast<unsigned int>(time(nullptr)));
	Game _game;

	_game.Start();
	_game.Update();
	_game.Stop();
	
	return 0;
}