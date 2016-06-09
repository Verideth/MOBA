#include "Localplayer.h"
#include <SFML/Graphics.hpp>
#include "Health.h"
#include <TGUI/TGUI.hpp>
#include "Collision.h"

Player localPlayer;
Collision col;

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
	if (col.IsColliding(ply, ))
}