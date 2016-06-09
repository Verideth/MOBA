#include <SFML/Graphics.hpp>

#include "Sprite.h"

sf::Vector2f Sprite::GetPos()
{
	return sprite.getPosition();
}

sf::Vector2f Sprite::GetOrigin()
{
	return sprite.getOrigin();
}

float Sprite::GetHealth()
{
	return spriteHealth;
}