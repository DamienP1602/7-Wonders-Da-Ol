<<<<<<< HEAD
#include "MapManager.h"

MapManager::MapManager(const float _x, const float _y)
{
	gridSizeX = _x;
	gridSizeY = _y;
}

void MapManager::CreateGrid()
{
	//TODO
}
=======
#include "MapManager.h"

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

void MapManager::CreateGrid()
{
	//TODO
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
	//TODO
	return nullptr;
}
>>>>>>> Damien-branch
