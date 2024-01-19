#include "Entity.h"
#include "MovementComponent.h"
#include "AlignmentReaction.h"

Entity::Entity(const EntityType& _type)
{
	type = _type;
	shape = nullptr;
	movement = new MovementComponent();
	alignment = new AlignmentReaction();
}

Entity::Entity(const EntityType& _type, Shape* _shape)
{
	type = _type;
	shape = _shape;
	movement = new MovementComponent();
	alignment = new AlignmentReaction();
}

Entity::~Entity()
{
	delete movement;
	delete alignment;
}

void Entity::Swap(vector<Entity*> _balls)
{
	Entity* _tempo = _balls[0];
	_balls[0]->GetShape()->move(_balls[1]->GetShape()->getPosition());
	_balls[1]->GetShape()->move(_tempo->GetShape()->getPosition());
}
