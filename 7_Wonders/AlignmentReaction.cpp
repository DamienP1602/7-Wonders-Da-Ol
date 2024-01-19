#include "AlignmentReaction.h"

void AlignmentReaction::PutInVector(Entity* _entity)
{
	alignedEntity.push_back(_entity);
}

void AlignmentReaction::DestroyEntity()
{
	//TODO
	alignedEntity.clear();
}
