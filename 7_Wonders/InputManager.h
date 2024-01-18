#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class InputManager
{
public:
	virtual void ExecuteCallback(Event _event) = 0;
};

