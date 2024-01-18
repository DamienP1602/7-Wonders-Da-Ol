#pragma once
#include <SFML/Graphics.hpp>
#include "Entity.h"

using namespace sf;

class CollisionComponent
{
public:
	bool CheckCollision(Entity* _currentEntity);
};

