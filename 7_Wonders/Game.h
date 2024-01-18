#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <vector>
#include <iostream>

#include "Map.h"
#include "InputManager.h"

using namespace sf;
using namespace std;

class Game
{
	RenderWindow window;

	int life;
	int timer;
	int score;
	int goal;
	Map* map;

	vector<Drawable*> drawables;
	vector<InputManager*> inputManager;

public:
	Game();
	~Game();

public:
	void Start();
	void Update();
	void Stop();
};

