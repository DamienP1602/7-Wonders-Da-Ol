#pragma once
#include <SFML/Graphics.hpp>
#include "Entity.h"

using namespace sf;

class InputManager
{
public:
	virtual void ExecuteCallbacks(Event _event) = 0;

};

