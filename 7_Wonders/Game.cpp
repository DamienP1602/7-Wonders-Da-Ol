#include "Game.h"

Game::Game()
{
	life = int();
	timer = int();
	score = int();
	goal = int();
	map = new Map();
}

Game::~Game()
{
	delete map;
}

void Game::Start()
{
	Vector2f _windowSize(1920.0f, 1080.0f);
	window.create(VideoMode(static_cast<unsigned int>(_windowSize.x), static_cast<unsigned int>(_windowSize.y)), "7 Wonders");

}

void Game::Update()
{
	while (window.isOpen())
	{
		// Gestion des inputs
		Event _event;
		while (window.pollEvent(_event))
		{
			if (_event.type == Event::Closed)
			{
				window.close();
			}

			if (_event.type == Event::MouseMoved)
			{
				/*cout << _event.mouseMove.x << endl;
				cout << _event.mouseMove.y << endl;*/
			}

			for (InputManager* _manager : inputManager)
			{
				_manager->ExecuteCallback(_event);
			}
		}


		window.clear();

		//window.draw();

		window.display();
	}
}

void Game::Stop()
{

}
