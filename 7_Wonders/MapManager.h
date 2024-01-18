#pragma once
#include <SFML/Graphics.hpp>

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
	MapManager(const float _x, const float _y);
public:

	void CreateGrid();
};

