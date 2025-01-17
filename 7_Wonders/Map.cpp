#include "Map.h"

Map::Map() : MapManager()
{
	Init();
}

void Map::Init()
{
	cases = vector<vector<Case*>>(8);

	int _random;
	int _gridX = static_cast<int>(GetX());
	int _gridY = static_cast<int>(GetY());

	float _x = 20.0f, _y = 20.0f;

	for (int _i = 0; _i < _gridX; _i++)
	{
		_x = 20.0f;
		for (int _i2 = 0; _i2 < _gridY; _i2++)
		{
			_random = rand() % 4 + 0;
			Case* _newCase = new Case(new Entity(ENTITY_CLASSIC, new CircleShape(40.0f), GetColorOnInt(_random)), Vector2f(_x, _y));
			cases[_i].push_back(_newCase);
			_x += 100.0f;
		}
			_y += 100.0f;
	}
}
