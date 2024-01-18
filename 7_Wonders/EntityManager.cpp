#include "EntityManager.h"

EntityManager::EntityManager()
{
	allEntities = vector<Entity*>();
}

EntityManager::EntityManager(vector<Entity*> _allEntities)
{
	allEntities = _allEntities;
}

void EntityManager::Add(Entity* _entityToAdd)
{
	allEntities.push_back(_entityToAdd);
}

void EntityManager::Remove(Entity* _entityToRemove)
{
	const int _vectorSize = static_cast<const int>(allEntities.size());
	for (int _i = 0; _i < _vectorSize; _i++)
	{
		if (_entityToRemove == allEntities[_i])
		{
			allEntities.erase(allEntities.begin() + _i);
		}
	}
}

bool EntityManager::Exist(Entity* _entityToCheck)
{
	const int _vectorSize = static_cast<const int>(allEntities.size());
	for (int _i = 0; _i < _vectorSize; _i++)
	{
		if (_entityToCheck == allEntities[_i])
		{
			return true;
		}
	}
	return false;
}
