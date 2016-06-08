#pragma once

#include <SFML/Graphics.hpp>
#include <TGUI\TGUI.hpp>

class Notification
{
public:
	sf::RectangleShape DrawNotifyBox(float x, float y, float width, float height, sf::String text, sf::Color col, sf::Color boxCol);

private:
	sf::Font font;
	sf::Text notifyText;
	sf::RectangleShape rectShape;
	sf::Time elapsedTime;
	sf::Clock clock;
};