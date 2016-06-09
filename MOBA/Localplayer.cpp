#include "Localplayer.h"
#include <SFML/Graphics.hpp>
#include <TGUI/TGUI.hpp>

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
