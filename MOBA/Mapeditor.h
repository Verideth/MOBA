#pragma once

#include <TGUI/TGUI.hpp>
#include <SFML\Graphics.hpp>
#include <vector>

#include "Localplayer.h"

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
	sf::RectangleShape DrawBar(float x, float y, float width, float height, sf::Color col);
	sf::CircleShape DrawCircle(float x, float y, float radius, sf::Color col);

private:
	sf::RectangleShape bar;
	sf::CircleShape circle;
};

class MapEditor
{
public:
<<<<<<< HEAD
	void OpenMapEditor();
	sf::Vector2f Snap(sf::RenderWindow &mapEditor);
	sf::CircleShape Color();
=======
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


						/*if (circleButton.IsOnPress() == false)
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
						}*/

						if (evnt.type == sf::Event::Closed) // if pressed exit then window close
						{
							mapEditor.close();
						}

						mapEditor.draw(circleButton.Draw(25, 25, 50, 50, sf::Color(255, 255, 255, 255)));
						mapEditor.display();
					}
				}
			}
		}
	}
>>>>>>> origin/master

private:
	MapGUI gui;
	Player player;
	sf::Mouse mouse;
	sf::RectangleShape rectShape;
	sf::RectangleShape graphBar;
	sf::CircleShape circleShape;
	tgui::Button::Ptr button = std::make_shared<tgui::Button>();
};

class MapLS
{
public:
	const char* SaveMap(const char* locToSave);
	const char* LoadMap(const char* mapDirectory);

private:
	bool isNoSaveMap;
	bool isYesSaveMap;
	bool isNoLoadMap;
	bool isYesLoadMap;
	tgui::Button::Ptr yesSaveMap = std::make_shared<tgui::Button>();
	tgui::Button::Ptr noSaveMap = std::make_shared<tgui::Button>();
	tgui::Button::Ptr yesLoadMap = std::make_shared<tgui::Button>();
	tgui::Button::Ptr noLoadMap = std::make_shared<tgui::Button>();
	MapEditor editor;
};
