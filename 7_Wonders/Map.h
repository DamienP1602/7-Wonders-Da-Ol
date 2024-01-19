#pragma once
#include "MapManager.h"

#include "Singleton.h"
#include <vector>

class Map : public MapManager
{
	vector<vector<Case*>> cases;

public:
	Map();
	void Init();

public:
	vector<vector<Case*>> GetAllMap() const
	{
		return cases;
	}
};

