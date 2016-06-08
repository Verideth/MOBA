#pragma once

#include <SFML\Graphics.hpp>


class Player
{
public:
	sf::RectangleShape DrawPlayer(float x, float y, float width, float height, sf::Color col);
	sf::Vector2f GetPos();
	sf::Vector2f GetOrigin();

private:
	sf::RectangleShape player;
	float x;
	float y;
};