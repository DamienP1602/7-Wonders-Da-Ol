#include <SFML/Graphics.hpp>

#include "Game.h"

using namespace sf;

int main()
{
	Game _game;

	_game.Start();
	_game.Update();
	_game.Stop();
	
	return 0;
}