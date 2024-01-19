#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;
using namespace std;

enum EntityType
{
	ENTITY_NONE, ENTITY_CLASSIC, ENTITY_SPECIAL
};

enum ColorType
{
	COLOR_NONE, COLOR_RED, COLOR_BLUE, COLOR_YELLOW, COLOR_GREEN, COLOR_PURPLE
};

class Entity
{
	EntityType type;
	ColorType color;
	Texture* texture;

protected:
	Shape* shape;

public:
	EntityType GetType()const
	{
		return type;
	}
	Shape* GetShape()
	{
		return shape;
	}
	ColorType GetColor()
	{
		return color;
	}
public:
	Entity(const EntityType& _type);
	Entity(const EntityType& _type, Shape* _shape, const ColorType& _color);

public:
	void SetColor();
	void SetTexture();
};

