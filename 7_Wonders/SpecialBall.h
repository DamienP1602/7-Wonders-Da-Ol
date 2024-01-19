#pragma once
#include "Entity.h"
#include "MovementComponent.h"
#include "AlignmentReaction.h"

class SpecialBall : public Entity
{
	MovementComponent* movement;
	AlignmentReaction* collision;

public:
	SpecialBall();
	SpecialBall(CircleShape* _shape);
	~SpecialBall();

public:
	void Move();

public:

};

