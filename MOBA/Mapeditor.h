#pragma once

#include <SFML\Graphics.hpp>
#include <vector>

#include "Localplayer.h"
#include "Button.h"

bool isInEditor;
bool isCircleButtonPressed;

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

					std::vector<sf::RectangleShape> rect(100, sf::RectangleShape(rectShape));
					std::vector<sf::CircleShape> circle(100, sf::CircleShape(circleShape));

					Button circleButton;

					while (mapEditor.pollEvent(evnt)) // check for events
					{
						if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
						{
							for (std::vector<sf::RectangleShape>::iterator i = rect.begin(); i != rect.end(); i++)
							{
								i->setFillColor(sf::Color(25, 255, 25, 255));
								i->setPosition(mouse.getPosition().x, mouse.getPosition().y);
								i->setSize(sf::Vector2<float>(200, 500));

								mapEditor.draw(*i);
							}
						}

						if (circleButton.IsOnPress() == false)
						{
							isCircleButtonPressed = true;

							if (isCircleButtonPressed)
							{
								if (sf::Mouse::Button(sf::Mouse::Left))
								{
									for (std::vector<sf::CircleShape>::iterator i = circle.begin(); i != circle.end(); i++)
									{
										i->setFillColor(sf::Color(25, 255, 25, 255));
										i->setPosition(mouse.getPosition().x, mouse.getPosition().y);
										i->setRadius(100);

										mapEditor.draw(*i);
									}
								}
							}
						}

						if (evnt.type == sf::Event::Closed) // if pressed exit then window close
						{
							mapEditor.close();
						}
					}

					mapEditor.draw(circleButton.Draw(25, 25, 50, 50, sf::Color(255, 255, 255, 255)));
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
	sf::CircleShape circleShape;
};
