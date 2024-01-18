#pragma once
#include "CollisionComponent.h"

enum DirectionType
{
	DIRECTION_NONE, DIRECTION_RIGT, DIRECTION_LEFT, DIRECTION_UP, DIRECTION_DOWN
};

struct DirectionData
{
	DirectionType type;
	Vector2f direction;

	DirectionData()
	{
		type = DIRECTION_NONE;
		direction = Vector2f();
	}
	DirectionData();
};

class MovementComponent
{
	float speed; //pour l'animation
	DirectionData direction;
	bool canMove;

public:
	MovementComponent();

public:
	void Move(CollisionComponent* _collision, Entity* _entity);
	void TryToMove(CollisionComponent* _collision, Entity* _entity, const DirectionData& _direction);
	void ToggleMove()
	{
		canMove = !canMove;
	}
};

