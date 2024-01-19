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

void MapManager::CheckCanFall(vector<vector<Case*>> _allCases)
{
	for (int _indexY = 0; _indexY < static_cast<int>(GetX()) ; _indexY++)
	{
		for (int _indexX = 0; _indexX < static_cast<int>(GetY()); _indexX++)
		{
			if (_allCases[_indexY][_indexX]->ID > 56) return; // si je suis a la derniere ligne je ne fais pas tomber

			if (_allCases[_indexY][_indexX]->entity == nullptr) // si la case est vide je fais tomber la case à 8 ID de moins
			{
				Vector2f _shapePosition = _allCases[_indexY - 1][_indexX]->GetShape()->getPosition();
				_allCases[_indexY - 1][_indexX]->GetShape()->setPosition(Vector2f(_shapePosition.x, _shapePosition.y + 100.0f));
			}
		}

	}
}
