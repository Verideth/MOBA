#include "Localplayer.h"
#include <SFML/Graphics.hpp>
#include <TGUI/TGUI.hpp>

sf::RectangleShape Player::DrawPlayer(float x, float y, float width, float height, sf::Color col)
{
	player.setPosition(x, y);
	player.setSize(sf::Vector2<float>(width, height));
	player.setFillColor(col);

	return player;
}

sf::Vector2f Player::GetPos()
{
	return player.getPosition();
}

sf::Vector2f Player::GetOrigin()
{
	return player.getOrigin();
}
