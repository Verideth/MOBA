#pragma once

#include <SFML\Graphics.hpp>

class Button
{
public:
	bool IsOnPress()
	{
		if (mouse.getPosition().x == button.getPosition().x && mouse.getPosition().y == button.getPosition().y)
		{
			if (mouse.isButtonPressed(sf::Mouse::Left))
			{
				isPressed = true;

				if (isPressed)
				{
					buttonOn = true;
				}
			}
		}

		return false;
	}

	sf::RectangleShape Draw(float x, float y, float width, float height, sf::Color col)
	{
		button.setPosition(x, y);
		button.setFillColor(col);
		button.setSize(sf::Vector2<float>(width, height));

		return button;
	}

private:
	sf::RectangleShape button;
	sf::Mouse mouse;
	bool isPressed;
	bool buttonOn;
};