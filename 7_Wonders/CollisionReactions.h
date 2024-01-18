#pragma once
#include "Entity.h"
#include <vector>

using namespace std;

class CollisionReactions
{
	vector<Entity*> collisionedEntity;

public:
	void PutInCollision(Entity* _entity);
	void DestroyEntity();
};

