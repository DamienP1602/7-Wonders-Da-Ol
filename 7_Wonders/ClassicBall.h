#pragma once
#include "Entity.h"
#include "InputManager.h"
#include "MovementComponent.h"
#include "CollisionComponent.h"

class ClassicBall : public Entity, public InputManager
{
	MovementComponent* movement;
	CollisionComponent* collision;

public:
	ClassicBall();
	ClassicBall(CircleShape* _shape);
	~ClassicBall();


public:
	void Move();
	void ExecuteCallback();

};

