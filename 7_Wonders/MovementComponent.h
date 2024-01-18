#pragma once
<<<<<<< HEAD

enum DirectionData
{
    DIRECTION_NONE, DIRECTION_RIGT, DIRECTION_LEFT, DIRECTION_UP, DIRECTION_DOWN
=======
<<<<<<< HEAD
class MovementComponent
{
=======

enum DirectionData
{
	DIRECTION_NONE, DIRECTION_RIGT, DIRECTION_LEFT, DIRECTION_UP, DIRECTION_DOWN
};

class MovementComponent
{
	float speed; //pour l'animation
	DirectionData direction;
	bool canMove;

public:
	MovementComponent();

	void ToggleMove()
	{
		canMove = !canMove;
	}
>>>>>>> Damien-branch
>>>>>>> main
};

class MovementComponent
{
    float speed; //pour l'animation
    DirectionData direction;
    bool canMove;

public:
    MovementComponent();
};