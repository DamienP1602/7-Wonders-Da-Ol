#pragma once
#include "MapManager.h"

#include "Singleton.h"
#include <vector>

class Map : public MapManager, public Singleton<Map>
{
	vector<vector<Case*>> cases;

public:
	Map();
	vector<vector<Case*>> Init();

public:
	vector<vector<Case*>> GetAllMap()
	{
		return cases;
	}
};

