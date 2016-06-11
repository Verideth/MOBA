#pragma once

#include <SFML\Graphics.hpp>
#include "Weapons.h"

class Collision
{
public:
	bool IsColliding(sf::Sprite a, sf::Sprite b);
	bool IsCollidingWeapon(sf::Sprite a, Weapons::RPG b);

private:
};