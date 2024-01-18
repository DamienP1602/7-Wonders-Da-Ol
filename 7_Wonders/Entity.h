#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

enum EntityType
{
	ENTITY_NONE, ENTITY_CLASSIC, ENTITY_SPECIAL
};

class Entity
{
	EntityType type;

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

public:
	Entity(const EntityType& _type);
	Entity(const EntityType& _type, Shape* _shape);

public:

};

