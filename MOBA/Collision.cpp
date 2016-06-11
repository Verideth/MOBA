#include "Collision.h"

bool Collision::IsCollidingWeapon(sf::Sprite a, Weapons::RPG b)
{
	sf::Vector2f apos = a.getPosition();
	sf::Vector2f bpos = b.GetPos();
	sf::Vector2u asz = a.getTexture()->getSize();
	sf::Vector2f bsz = b.GetSize();

	if (!(apos.x + asz.x >= bpos.x && apos.x <= bpos.x + bsz.x))
	{
		return false;
	}
	else if (apos.y + asz.y >= bpos.y && apos.y <= bpos.y + bsz.y)
	{
		return false;
	}

	return true;
}

bool Collision::IsColliding(sf::Sprite a, sf::Sprite b)
{
	sf::Vector2f apos = a.getPosition();
	sf::Vector2f bpos = b.getPosition();
	sf::Vector2u asz = a.getTexture()->getSize();
	sf::Vector2u bsz = b.getTexture()->getSize();
 
	if (!(apos.x + asz.x >= bpos.x && apos.x <= bpos.x + bsz.x))
	{
		return false;
	}
	else if (apos.y + asz.y >= bpos.y && apos.y <= bpos.y + bsz.y)
	{
		return false;
	}

	return true;
}
