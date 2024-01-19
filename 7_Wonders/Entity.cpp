#include "Entity.h"

Entity::Entity(const EntityType& _type)
{
	type = _type;
	shape = nullptr;
	color = COLOR_NONE;
	texture = new Texture();
}

Entity::Entity(const EntityType& _type, Shape* _shape, const ColorType& _color)
{
	type = _type;
	shape = _shape;
	color = _color;
	texture = new Texture();
}

void Entity::SetColor()
{
	Color _colors[] = {Color::Red,Color::Blue,Color::Yellow,Color::Green,Color::Magenta};
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