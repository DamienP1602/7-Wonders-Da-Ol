#pragma once
#include <SFML/Graphics.hpp>
#include "Entity.h"
#include "MapManager.h"
#include "Singleton.h"
#include <vector>

using namespace sf;
using namespace std;

struct Case
{
	Entity* entity;
	Vector2f position;

	Case()
	{
		entity = new Entity(ENTITY_NONE);
		position = Vector2f(0.0f, 0.0f);
	}
	Case(Entity* _entity)
	{
		entity = _entity;
		position = Vector2f(0.0f, 0.0f);

		Init();
	}
	Case(Entity* _entity, const Vector2f _position)
	{
		entity = _entity;
		position = _position;

		Init();
	}

	Shape* GetShape() const
	{
		return entity->GetShape();
	}

	void Init()
	{
		entity->GetShape()->setPosition(position);
		entity->SetColor();
	}
};

class Map : public MapManager
{
	vector<vector<Case*>> cases;

public:
	Map();
	void Init();

public:
	vector<vector<Case*>> GetAllMap() const
	{
		return cases;
	}
};

