#include "MapManager.h"
#include <iostream>

MapManager::MapManager()
{
    gridSizeX = 8.0f;
    gridSizeY = 8.0f;
}

MapManager::MapManager(const float _x, const float _y)
{
    gridSizeX = _x;
    gridSizeY = _y;
}

ColorType MapManager::GetColorOnInt(const int _int) const
{
    ColorType _color[5] = { COLOR_RED,
                        COLOR_BLUE,
                        COLOR_YELLOW,
                        COLOR_GREEN,
                        COLOR_PURPLE
    };

    return _color[_int];
}

Case* MapManager::Selection(const Vector2i _mousePosition, vector<vector<Case*>> _allCases) const
{
<<<<<<< Updated upstream
    const FloatRect& _mousePositionFR = FloatRect(_mousePosition.x, _mousePosition.y, 1.0f, 1.0f);

    for (vector<Case*>& _balls : _allCases)
    {
        for (Case* _ball : _balls)
        {
            if (_ball->GetShape()->getGlobalBounds().intersects(_mousePositionFR))
                cout << "Collision";
        }
    }
    return nullptr;
=======
	const float _mouseX = static_cast<float>(_mousePosition.x);
	const float _mouseY = static_cast<float>(_mousePosition.y);

	const FloatRect& _mousePositionFR = FloatRect(_mouseX, _mouseY,1.0f,1.0f);

	for (vector<Case*>& _balls : _allCases)
	{
		for (Case* _ball : _balls)
		{
			if (_ball->GetShape()->getGlobalBounds().intersects(_mousePositionFR)) 
				return _ball;
		}
	}
	return nullptr;
}

bool MapManager::notNullptr(vector<Case*> _entities)
{
	for (const Case* _entity : _entities)
	{
		if (_entity == nullptr) return false;
		if (_entity->entity == nullptr) return false;
	}
	return true;
}

bool MapManager::isNear(vector<Case*> _entities)
{
	return _entities[0]->ID == (_entities[1]->ID - 1) ||
		_entities[0]->ID == (_entities[1]->ID + 1) ||
		_entities[0]->ID == (_entities[1]->ID - 8) ||
		_entities[0]->ID == (_entities[1]->ID + 8);
}

void MapManager::Swap(vector<Case*>& _balls)
{
	Vector2f& _ball1 = _balls[0]->position;
	Vector2f& _ball2 = _balls[1]->position;

	_balls[0]->entity->GetShape()->setPosition(_ball2);
	_balls[1]->entity->GetShape()->setPosition(_ball1);
>>>>>>> Stashed changes
}