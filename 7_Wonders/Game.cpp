#include "Game.h"

Game::Game()
{
	life = int();
	timer = int();
	score = int();
	goal = int();
	map = new Map();

	texture = new Texture();

	entitiesToSwap = vector<Case*>();
	windowSize = Vector2f(1920.0f, 1080.0f);
}

Game::~Game()
{
	delete map;
}

void Game::Start()
{
	Vector2f _windowSize = windowSize;

	window.create(VideoMode(static_cast<unsigned int>(_windowSize.x), static_cast<unsigned int>(_windowSize.y)), "7 Wonders");

	if (!texture->loadFromFile("Assets/T_Font.png"))
	{
		cout << "Font error loaded" << endl;
	}
}

void Game::Update()
{
	Sprite _sprite;
	_sprite.setTextureRect(IntRect(0, -250, static_cast<int>(windowSize.x), static_cast<int>(windowSize.y)));
	_sprite.setTexture(*texture);

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
					Case* _case = map->Selection(Mouse::getPosition(), map->GetAllMap());
					entitiesToSwap.push_back(_case);
				}
			}
			if (_event.type == Event::MouseButtonReleased)
			{
				Case* _case = map->Selection(Mouse::getPosition(), map->GetAllMap());
				entitiesToSwap.push_back(_case);

				TryToSwap(entitiesToSwap);
			}

		}

		window.clear();

		window.draw(_sprite);
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

void Game::TryToSwap(vector<Case*>& _entities)
{
	if (map->notNullptr(_entities))
	{
		if (map->isNear(_entities))
		{
			map->Swap(_entities);
		}
	}
	_entities.clear();
}
