#pragma once
#include <SFML/Graphics.hpp>
#include "Entity.h"

using namespace sf;
using namespace std;

struct Case
{
	int ID;
	Entity* entity;
	Vector2f position;

	Case()
	{
		ID = 0;
		entity = nullptr;
		position = Vector2f(0.0f, 0.0f);
	}
	Case(Entity* _entity)
	{
		ID = 0;
		entity = _entity;
		position = Vector2f(0.0f, 0.0f);

		Init();
	}
	Case(Entity* _entity, const Vector2f _position,const int _id)
	{
		entity = _entity;
		position = _position;

		ID = _id;

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
		SetOriginToCenter();
		entity->SetTexture();
	}
	void SetOriginToCenter()
	{
		const Vector2f& _size = entity->GetShape()->getGlobalBounds().getSize() / 2.0f;

		entity->GetShape()->setOrigin(_size.x, _size.y);
	}
	void SetPosition(const Vector2f& _position)
	{
		position = _position;

		entity->GetShape()->setPosition(position);
	}
};