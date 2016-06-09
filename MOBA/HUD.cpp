#include <SFML\Graphics.hpp>
#include <iostream>

#include "HUD.h"
#include "Localplayer.h"

Player playerHealth;
bool isShowingHud;

void HUD::DrawHUD()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::F9))
	{
		isShowingHud = false;
	}
	else
	{
		isShowingHud = true;

		if (isShowingHud)
		{
			pixelFontForHealth.loadFromFile("fonts/pixel.ttf");

			health.setFont(pixelFontForHealth);
			health.setString("Health ");
			health.setPosition(25, 25);
			health.setStyle(sf::Text::Style::Regular);

			healthText.setFont(pixelFontForHealth);
			healthText.setString(sf::String(std::to_string(playerHealth.GetHealth())));
		}
	}
}