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

bool MapManager::notNullptr(Case* _case1, Case* _case2)
{
	if (_case1 == nullptr || _case2 == nullptr) return false;
	if (_case1->entity == nullptr || _case2->entity == nullptr) return false;

	return true;
}

bool MapManager::isNear(Case* _case1, Case* _case2)
{
	return _case1->ID == (_case2->ID - 1) ||
		_case1->ID == (_case2->ID + 1) ||
		_case1->ID == (_case2->ID - 8) ||
		_case1->ID == (_case2->ID + 8);
}

void MapManager::Swap(Case* _case1, Case* _case2)
{
	Case _temp = *_case1;
	Case* _tempPtr = &_temp;

	_case1->ChangeCase(_case2);
	_case2->ChangeCase(_tempPtr);


}