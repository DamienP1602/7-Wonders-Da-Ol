#pragma once
#include <SFML/Graphics.hpp>
#include "Entity.h"

using namespace sf;


class MapManager
{
	float gridSizeX;
	float gridSizeY;

public:
	float GetX() const
	{
		return gridSizeX;
	}
	float GetY() const
	{
		return gridSizeY;
	}
public:
	MapManager();
	MapManager(const float _x, const float _y);
public:

	void CreateGrid();

	ColorType GetColorOnInt(const int _int);
};

