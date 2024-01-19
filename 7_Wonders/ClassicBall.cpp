#include "ClassicBall.h"

ClassicBall::ClassicBall() : Entity(ENTITY_CLASSIC)
{
	shape = new CircleShape(10.0f);

	//TODO
}

ClassicBall::ClassicBall(CircleShape* _shape) : Entity(ENTITY_CLASSIC)
{
	shape = _shape;
}

ClassicBall::~ClassicBall()
{
	delete shape;
}

void ClassicBall::Move()
{
	//TODO
	movement;
}
