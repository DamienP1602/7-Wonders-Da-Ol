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

	Case* case1ToSwap;
	Case* case2ToSwap;

	vector<Drawable*> drawables;

public:
	Game();
	~Game();

public:
	void Start();
	void Update();
	void Stop();

	void TryToSwap(Case* _case1, Case* _case2);
};

