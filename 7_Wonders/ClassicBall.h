#pragma once
#include "Entity.h"
#include "MovementComponent.h"
#include "AlignmentReaction.h"

class ClassicBall : public Entity
{
	MovementComponent* movement;
	AlignmentReaction* collision;

public:
	ClassicBall();
	ClassicBall(CircleShape* _shape);
	~ClassicBall();


public:
	void Move();
	void ExecuteCallback();

};

