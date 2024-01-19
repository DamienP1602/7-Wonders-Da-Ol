#pragma once
#include "Entity.h"
#include "InputManager.h"

class ClassicBall : public Entity
{
public:
	ClassicBall();
	ClassicBall(CircleShape* _shape);
	~ClassicBall();


public:
	void Move();

};

