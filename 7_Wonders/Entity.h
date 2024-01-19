#pragma once
#include <SFML/Graphics.hpp>
#include <vector>

using namespace sf;
using namespace std;

class AlignmentReaction;
class MovementComponent;

enum EntityType
{
	ENTITY_NONE, ENTITY_CLASSIC, ENTITY_SPECIAL
};

class Entity
{
	EntityType type;

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

public:
	Entity(const EntityType& _type);
	Entity(const EntityType& _type, Shape* _shape);
	~Entity();

public:
	void Swap(vector<Entity*> _balls);

};

