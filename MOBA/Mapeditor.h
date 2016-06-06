#pragma once

#include <SFML\Graphics.hpp>

#include "Localplayer.h"

bool isInEditor;

class MapTiles
{

};

class MapEnts
{

};

class MapSpawns
{

};

class MapGUI
{
public:
	sf::RectangleShape DrawBar(float x, float y, float width, float height, sf::Color col)
	{
		bar.setFillColor(col);
		bar.setPosition(x, y);
		bar.setSize(sf::Vector2<float>(width, height));

		return bar;
	}

	sf::CircleShape DrawCircle(float x, float y, float radius, sf::Color col)
	{
		circle.setFillColor(col);
		circle.setPosition(x, y);
		circle.setRadius(radius);

		return circle;
	}

private:
	sf::RectangleShape bar;
	sf::CircleShape circle;
};

class MapEditor
{
public:
	void OpenMapEditor()
	{
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::F1))
		{
			isInEditor = true;

			if (isInEditor)
			{
				sf::RenderWindow mapEditor(sf::VideoMode(sf::VideoMode::getDesktopMode().width, sf::VideoMode::getDesktopMode().height), "Battle of Hecarix Map Editor");

				while (mapEditor.isOpen()) // game loop
				{
					sf::Event evnt; // event

					if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
					{
						rectShape = gui.DrawBar(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y, 250, 500, sf::Color(25, 255, 25, 255));
						rectShape.setPosition(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y);
					}

					while (mapEditor.pollEvent(evnt)) // check for events
					{
						if (evnt.type == sf::Event::Closed) // if pressed exit then window close
							mapEditor.close();
					}

					mapEditor.clear();
					mapEditor.draw(rectShape);	
					mapEditor.display();
				}
			}
		}
	}

private:
	MapGUI gui;
	Player player;
	sf::Mouse mouse;
	sf::RectangleShape rectShape;
};