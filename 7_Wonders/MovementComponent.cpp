#include "MovementComponent.h"

MovementComponent::MovementComponent()
{
	speed = 0.02f;
	directionData = DirectionData();
	canMove = false;
}

void MovementComponent::Move(AlignmentReaction* _alignment, Entity* _entity)
{
	if (!canMove) return;

	TryToMove(_alignment, _entity, directionData);
}

void MovementComponent::TryToMove(AlignmentReaction* _alignment, Entity* _entity, const DirectionData& _directionData)
{
	const Vector2f& _destination = _directionData.direction * speed;

	_entity->GetShape()->move(_destination);

	if (true)
	{

	}

}
