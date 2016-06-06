#pragma once

#include <SFML\Graphics.hpp>

#include "Localplayer.h"

Localplayer::Player player;

Map::MapGUI gui;
bool isInEditor;

namespace Map
{
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
					sf::RenderWindow mapEditor(sf::VideoMode(1200, 750), "Battle of Hecarix Map Editor");

					while (mapEditor.isOpen()) // window loop
					{
						sf::Event evnt; // event
						while (mapEditor.pollEvent(evnt)) // check for events
						{
							if (evnt.type == sf::Event::Closed) // if pressed exit then window close
								mapEditor.close();
						}

						mapEditor.clear();
						mapEditor.draw(ply.DrawPlayer(50, 50, 25, 200, sf::Color(255, 0, 255, 255)));
						mapEditor.display();
					}
				}
			}
		}
	};
}
