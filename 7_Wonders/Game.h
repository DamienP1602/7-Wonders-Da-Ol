#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <vector>
#include <iostream>

#include "Map.h"

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

	Vector2f windowSize;
	Texture* texture;

	vector<Case*> entitiesToSwap;

	vector<Drawable*> drawables;

public:
	Game();
	~Game();

public:
	void Start();
	void Update();
	void Stop();

	void TryToSwap(vector<Case*>& _entities);
};

