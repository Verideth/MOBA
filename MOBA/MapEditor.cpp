#include <SFML/Graphics.hpp>
#include <TGUI\TGUI.hpp>

#include "Mapeditor.h"
#include "Notification.h"

bool isInEditor;
bool isCircleButtonPressed;
bool isInColor;

Notification notify;

// Mapeditor
void MapEditor::OpenMapEditor()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::F1))
	{
		isInEditor = true;

		if (isInEditor)
		{
			sf::RenderWindow mapEditor(sf::VideoMode(sf::VideoMode::getDesktopMode().width, sf::VideoMode::getDesktopMode().height), "Battle of Hecarix Map Editor");

			tgui::Gui gui{ mapEditor };
			gui.add(button, "Draw Circles");
			gui.setFont(tgui::Font("fonts/RPGSystem.ttf"));

			mapEditor.mapPixelToCoords(mouse.getPosition(mapEditor));

			while (mapEditor.isOpen()) // game loop
			{
				sf::Event evnt; // event

				std::vector<sf::RectangleShape> rect(100, sf::RectangleShape(rectShape));
				//std::vector<sf::CircleShape> circle(100, sf::CircleShape(circleShape));

				while (mapEditor.pollEvent(evnt)) // check for events
				{
					for (std::vector<sf::RectangleShape>::iterator i = rect.begin(); i != rect.end(); i++)
					{

						if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
						{
							i->setFillColor(sf::Color(25, 255, 25, 255));
							i->setPosition(Snap(mapEditor));
							i->setSize(sf::Vector2<float>(32, 32));

							mapEditor.draw(*i);
						}

						//if (sf::Mouse::isButtonPressed(sf::Mouse::Right))
						//{
						//	rect.pop_back();
						//}
					}

					if (evnt.type == sf::Event::Closed)
					{
						mapEditor.close();
					}

					gui.handleEvent(evnt);
				}

				gui.draw();
				mapEditor.draw(notify.DrawNotifyBox(50, 50, 150, 200, sf::String("Hello!"), sf::Color(255, 255, 255, 255), sf::Color(255, 255, 255, 150)));
				mapEditor.display();
			}
		}
	}
}

sf::Vector2f MapEditor::Snap(sf::RenderWindow &mapEditor)
{
	sf::Vector2f mousePos = mapEditor.mapPixelToCoords(mouse.getPosition(mapEditor));

	float mouseX = mouse.getPosition(mapEditor).x;
	float mouseY = mouse.getPosition(mapEditor).y;

	mouseX = std::floor(mousePos.x / 32) * 32;
	mouseY = std::floor(mousePos.y / 32) * 32;

	sf::Vector2f vectorMouseXY;
	vectorMouseXY.x = mouseX;
	vectorMouseXY.y = mouseY;

	return vectorMouseXY;
}

sf::CircleShape MapEditor::Color()
{

}

// MapLS
const char* MapLS::LoadMap(const char* mapDirectory)
{
	sf::RenderWindow saveMapWindow(sf::VideoMode(150, 150), "Save map?");

	while (saveMapWindow.isOpen()) // game loop
	{
		sf::Event evnt; // event

		while (saveMapWindow.pollEvent(evnt)) // check for events
		{
			editor.OpenMapEditor();

			if (evnt.type == sf::Event::Closed) // if pressed exit then window close
			{
				saveMapWindow.close();
			}
		}

		saveMapWindow.clear();
		saveMapWindow.display();
	}
}

const char* MapLS::SaveMap(const char* locToSave)
{
	sf::RenderWindow saveMapWindow(sf::VideoMode(150, 150), "Save map?");

	while (saveMapWindow.isOpen()) // game loop
	{
		sf::Event evnt; // event

		while (saveMapWindow.pollEvent(evnt)) // check for events
		{
			editor.OpenMapEditor();

			if (evnt.type == sf::Event::Closed) // if pressed exit then window close
			{
				saveMapWindow.close();
			}
		}

		saveMapWindow.clear();
		saveMapWindow.display();
	}
}

// MapGUI
sf::RectangleShape MapGUI::DrawBar(float x, float y, float width, float height, sf::Color col)
{
	bar.setFillColor(col);
	bar.setPosition(x, y);
	bar.setSize(sf::Vector2<float>(width, height));

	return bar;
}

sf::CircleShape MapGUI::DrawCircle(float x, float y, float radius, sf::Color col)
{
	circle.setFillColor(col);
	circle.setPosition(x, y);
	circle.setRadius(radius);

	return circle;
}