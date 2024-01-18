#include "SpecialBall.h"

SpecialBall::SpecialBall() : Entity(ENTITY_SPECIAL)
{
	shape = new CircleShape();
	//TODO
	movement = new MovementComponent();
	collision = new CollisionComponent();
}

SpecialBall::SpecialBall(CircleShape* _shape) : Entity(ENTITY_SPECIAL)
{
	shape = _shape;
	//TODO
	movement = new MovementComponent();
	collision = new CollisionComponent();
}

SpecialBall::~SpecialBall()
{
	delete movement;
	delete collision;
	delete shape;
}

void SpecialBall::Move()
{
	//TODO
}

void SpecialBall::ExecuteCallback(Event _event)
{
	//TODO
}
