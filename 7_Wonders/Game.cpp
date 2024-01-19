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
	Case* _case1 = nullptr;
	Case* _case2 = nullptr;

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

			if (_event.type == Event::MouseButtonPressed)
			{
				if (Mouse::isButtonPressed(Mouse::Button::Left))
				{
					_case1 = map->Selection(Mouse::getPosition(),map->GetAllMap());
				}
			}

		}

		for (vector<Case*>& _balls : map->GetAllMap())
		{
			for (Case* _ball : _balls)
			{
				_ball->entity->Move();
			}
		}

		window.clear();

		for (vector<Case*>& _balls : map->GetAllMap())
		{
			for (Case* _ball : _balls)
			{
				window.draw(*_ball->GetShape());
			}
		}

		window.display();
	}
}

void Game::Stop()
{

}