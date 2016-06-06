#pragma once

#include <SFML\Graphics.hpp>

namespace Collision
{
	bool IsColliding(sf::RectangleShape a, sf::RectangleShape b)
	{
		sf::Vector2f apos = a.getPosition();
		sf::Vector2f bpos = b.getPosition();
		sf::Vector2f asz = a.getSize();
		sf::Vector2f bsz = b.getSize();

		if (!(apos.x + asz.x >= bpos.x && apos.x <= bpos.x + bsz.x))
			return false;
		else if (apos.y + asz.y >= bpos.y && apos.y <= bpos.y + bsz.y)
			return false;

		return true;
	}
}