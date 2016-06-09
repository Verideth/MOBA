#pragma once

#include <SFML/Graphics.hpp>

class Sprite
{
public:
	sf::Vector2f GetPos();
	sf::Vector2f GetOrigin();
	float GetHealth();

private:
	sf::Sprite sprite;
	float x;
	float y;
	float spriteHealth;
	sf::Texture texture;
};