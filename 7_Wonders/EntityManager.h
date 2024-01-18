#pragma once
#include <vector>
#include "Singleton.h"
#include "Entity.h"

using namespace std;

class EntityManager : public Singleton<EntityManager>
{
	vector<Entity*> allEntities;

public:
	EntityManager();
	EntityManager(vector<Entity*> _allEntities);

public:
	void Add(Entity* _entityToAdd);
	void Remove(Entity* _entityToRemove);
	bool Exist(Entity* _entityToCheck);
};

