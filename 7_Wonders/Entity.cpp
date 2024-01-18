#include "Entity.h"

Entity::Entity(const EntityType& _type)
{
	type = _type;
	shape = nullptr;
}

Entity::Entity(const EntityType& _type, Shape* _shape)
{
	type = _type;
	shape = _shape;
}
