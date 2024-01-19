#include "Game.h"

Game::Game()
{
	life = int();
	timer = int();
	score = int();
	goal = int();
	map = new Map();

	texture = new Texture();

	case1ToSwap = new Case();
	case2ToSwap = new Case();

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

	vector<vector<Case*>> _allCases = map->Init();

	for (vector<Case*>& _balls : _allCases)
	{
		for (Case* _ball : _balls)
		{
			drawables.push_back(_ball->GetShape());
		}
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
					case1ToSwap = map->Selection(Mouse::getPosition(), map->GetAllMap());
				}

			}
			if (_event.type == Event::MouseButtonReleased)
			{
				case2ToSwap = map->Selection(Mouse::getPosition(), map->GetAllMap());

				TryToSwap(case1ToSwap, case2ToSwap);
			}


		}

		window.clear();

		window.draw(_sprite);


		for (const Drawable* _drawable : drawables)
		{
			window.draw(*_drawable);
		}

		window.display();
	}
}

void Game::Stop()
{

}

void Game::TryToSwap(Case* _case1, Case* _case2)
{
	if (map->notNullptr(_case1,_case2))
	{
		if (map->isNear(_case1, _case2))
		{
			map->Swap(_case1, _case2);
		}
	}
	_case1 = nullptr;
	_case2 = nullptr;
}
