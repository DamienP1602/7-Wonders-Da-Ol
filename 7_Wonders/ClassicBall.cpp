#include "ClassicBall.h"

ClassicBall::ClassicBall() : Entity(ENTITY_CLASSIC)
{
	shape = new CircleShape(10.0f);

	//TODO
	movement = new MovementComponent();
	collision = new CollisionComponent();
}

ClassicBall::ClassicBall(CircleShape* _shape) : Entity(ENTITY_CLASSIC)
{
	shape = _shape;


	movement = new MovementComponent();
	collision = new CollisionComponent();
}

ClassicBall::~ClassicBall()
{
	delete movement;
	delete collision;
	delete shape;
}

void ClassicBall::Move()
{
	//TODO
	movement;
}

void ClassicBall::ExecuteCallback()
{
	//TODO
}
