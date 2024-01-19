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
}