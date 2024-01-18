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

ColorType MapManager::GetColorOnInt(const int _int)
{
	ColorType _color[5] = { COLOR_RED,
						COLOR_BLUE,
						COLOR_YELLOW,
						COLOR_GREEN,
						COLOR_PURPLE
	};
	
	return _color[_int];
}
