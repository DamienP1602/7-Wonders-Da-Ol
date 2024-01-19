#pragma once
#include "Case.h"

class MapManager
{
	float gridSizeX;
	float gridSizeY;

protected:
	float GetX() const
	{
		return gridSizeX;
	}
	float GetY() const
	{
		return gridSizeY;
	}
public:
	MapManager();
	MapManager(const float _x, const float _y);
public:

	ColorType GetColorOnInt(const int _int) const;

	Case* Selection(const Vector2i _mousePosition, vector<vector<Case*>> _allCases) const;

	bool notNullptr(Case* _case1, Case* _case2);

	bool isNear(Case* _case1, Case* _case2);

	void Swap(Case* _case1, Case* _case2);

	void CheckCanFall(vector<vector<Case*>> _allCases);
};

