#include "MovementComponent.h"

MovementComponent::MovementComponent()
{
	speed = 0.02f;
	direction = DIRECTION_NONE;
	canMove = false;
}

void MovementComponent::Move(CollisionComponent* _collision, Entity* _entity)
{
	if (!canMove) return;

	TryToMove(_collision, _entity, direction);
}

void MovementComponent::TryToMove(CollisionComponent* _collision, Entity* _entity, const DirectionData& _direction)
{
	const float _destination = _direction * speed;


}
