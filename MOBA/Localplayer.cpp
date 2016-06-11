#include "Localplayer.h"
#include <SFML/Graphics.hpp>
#include "Health.h"
#include "Collision.h"

Player localPlayer;
Collision col;
sf::Sprite ply;
Weapons::RPG weps;

sf::Sprite Player::DrawLocalPlayer()
{
	
}

sf::Vector2f Player::GetPos()
{
	return ply.getPosition();
}

sf::Vector2f Player::GetOrigin()
{
	return ply.getOrigin();
}

float Player::GetHealth()
{
	return plyHealth;
}

float Health::HealthF()
{
	if (col.IsCollidingWeapon(ply, weps))
	{
		printf("Hello, world!");
	}
}