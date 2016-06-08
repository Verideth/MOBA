#include "Notification.h"

#include <SFML/Graphics.hpp>
#include <TGUI\TGUI.hpp>

sf::RectangleShape Notification::DrawNotifyBox(float x, float y, float width, float height, sf::String text, sf::Color col, sf::Color boxCol)
{
	elapsedTime = clock.getElapsedTime();

	font.loadFromFile("fonts/pixel.ttf");

	if (!font.loadFromFile("fonts/pixel.ttf"))
	{
		printf("Couldn't load pixel!\n");
	}

	notifyText.setPosition(x, y);
	notifyText.setColor(col);
	notifyText.setString(text);
	notifyText.setFont(font);
	notifyText.setStyle(sf::Text::Bold);

	rectShape.setPosition(x, y);
	rectShape.setFillColor(boxCol);
	rectShape.setSize(sf::Vector2<float>(width, height));

	if (elapsedTime.asSeconds() >= 5)
	{
		printf("5 secs have passed!");
		rectShape.setFillColor(sf::Color(boxCol.a = 0, boxCol.g = 0, boxCol.b = 0, boxCol.a = 0));
	}

	return rectShape;
}