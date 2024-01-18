#pragma once
<<<<<<< HEAD
#include <SFML/Graphics.hpp>

using namespace sf;

class InputManager
{
public:
	virtual void ExecuteCallback(Event _event) = 0;
=======
<<<<<<< HEAD
class InputManager
{
=======
#include <SFML/Graphics.hpp>
#include "Entity.h"

using namespace sf;

class InputManager
{
public:
	virtual void ExecuteCallbacks(Event _event) = 0;

>>>>>>> Damien-branch
>>>>>>> main
};

