#include "SpecialBall.h"

SpecialBall::SpecialBall() : Entity(ENTITY_SPECIAL)
{
	shape = new CircleShape();
	//TODO
}

SpecialBall::SpecialBall(CircleShape* _shape) : Entity(ENTITY_SPECIAL)
{
	shape = _shape;
	//TODO
}

SpecialBall::~SpecialBall()
{
	delete shape;
}

void SpecialBall::Move()
{
	//TODO
}
