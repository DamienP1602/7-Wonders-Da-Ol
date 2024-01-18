#pragma once
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
};

