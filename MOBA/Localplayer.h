#pragma once

#include <SFML\Graphics.hpp>

class Player
{
public:
	sf::Sprite DrawLocalPlayer();
	sf::Vector2f GetPos();
	sf::Vector2f GetOrigin();
	float GetHealth();

private:
	sf::Sprite ply;
	float x;
	float y;
	float plyHealth;
};