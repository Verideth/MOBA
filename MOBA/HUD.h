#pragma once

#include <SFML/Graphics.hpp>

class HUD
{
public:
	void DrawHUD();

private:
	sf::Text health;
	sf::Font pixelFontForHealth;
	sf::Text healthText;
};