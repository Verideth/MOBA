#pragma once

#include <SFML\Graphics.hpp>

sf::RectangleShape DrawBox(float x, float y, float width, float height, sf::Color col) // draw box
{
	sf::RectangleShape shape;

	shape.setFillColor(sf::Color(255, 0, 255, 255));
	shape.setSize(sf::Vector2<float>(width, height));
	shape.setPosition(x, y);

	return shape;
}

sf::CircleShape DrawCircle(float x, float y, float radius, sf::Color col)
{
	sf::CircleShape shape;

	shape.setFillColor(col);
	shape.setRadius(radius);
	shape.setPosition(x, y);

	return shape;
}