#pragma once

#include <SFML\Graphics.hpp>


class Player
{
public:
	sf::RectangleShape DrawPlayer(float x, float y, float width, float height, sf::Color col)
	{
		player.setPosition(x, y);
		player.setSize(sf::Vector2<float>(width, height));
		player.setFillColor(col);
		
		return player;
	}

	sf::Vector2f GetPos()
	{
		return player.getPosition();
	}

	sf::Vector2f GetOrigin()
	{
		return player.getOrigin();
	}

private:
	sf::RectangleShape player;
	float x;
	float y;
};