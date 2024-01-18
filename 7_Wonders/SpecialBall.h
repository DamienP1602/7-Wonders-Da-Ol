#pragma once
#include "Entity.h"
#include "InputManager.h"
#include "MovementComponent.h"
#include "CollisionComponent.h"

class SpecialBall : public Entity, public InputManager
{
	MovementComponent* movement;
	CollisionComponent* collision;

public:
	SpecialBall();
	SpecialBall(CircleShape* _shape);
	~SpecialBall();

public:
	void Move();
	void ExecuteCallback();

};

