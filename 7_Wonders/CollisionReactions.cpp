#include "CollisionReactions.h"

void CollisionReactions::PutInCollision(Entity* _entity)
{
	collisionedEntity.push_back(_entity);
}

void CollisionReactions::DestroyEntity()
{
	//TODO
	collisionedEntity.clear();
}
