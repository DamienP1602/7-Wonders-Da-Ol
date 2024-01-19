#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>

using namespace sf;
using namespace std;

class AlignmentReaction;
class MovementComponent;

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
	MovementComponent* movement;
	AlignmentReaction* alignment;

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
	Entity(const EntityType& _type, Shape* _shape);
	Entity(const EntityType& _type, Shape* _shape, const ColorType& _color);
	~Entity();

public:
	void Swap(vector<Entity*> _balls);
	void SetColor();
	void SetTexture();

};

