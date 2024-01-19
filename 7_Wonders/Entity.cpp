#include "Entity.h"
#include "MovementComponent.h"
#include "AlignmentReaction.h"

Entity::Entity(const EntityType& _type)
{
	type = _type;
	shape = nullptr;
	movement = new MovementComponent();
	alignment = new AlignmentReaction();
	color = COLOR_NONE;
	texture = new Texture();
}

Entity::Entity(const EntityType& _type, Shape* _shape)
{
	type = _type;
	shape = _shape;
	movement = new MovementComponent();
	alignment = new AlignmentReaction();
	color = COLOR_NONE;
	texture = new Texture();
}

Entity::Entity(const EntityType& _type, Shape* _shape, const ColorType& _color)
{
	type = _type;
	shape = _shape;
	movement = new MovementComponent();
	alignment = new AlignmentReaction();
	color = _color;
	texture = new Texture();
}

Entity::~Entity()
{
	delete movement;
	delete alignment;
}

void Entity::Swap(vector<Entity*> _balls)
{
	Entity* _tempo = _balls[0];
	_balls[0]->GetShape()->move(_balls[1]->GetShape()->getPosition());
	_balls[1]->GetShape()->move(_tempo->GetShape()->getPosition());
}

void Entity::SetColor()
{
	Color _colors[] = { Color::Red,Color::Blue,Color::Yellow,Color::Green,Color::Magenta };
	const int _value = static_cast<const int>(GetColor());

	shape->setFillColor(_colors[_value]);
}

void Entity::SetTexture()
{
	if (!texture->loadFromFile("Assets/T_Ball.png"))
	{
		cout << "Texture not loaded" << endl;
	}
	shape->setTexture(texture);
}
