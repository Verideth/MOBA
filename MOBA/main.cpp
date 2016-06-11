#include <SFML\Graphics.hpp>
#include <iostream>

#include "MapLoader.h"
#include "Drawing.h"
#include "Localplayer.h"
#include "Sprite.h"

Player ply;
Sprite playerSprite;
//MapEditor editor;

int main(int* argc, char** argv)
{
	sf::RenderWindow window(sf::VideoMode(sf::VideoMode::getDesktopMode().width, sf::VideoMode::getDesktopMode().height), "Battle of Hecarix");

	sf::Text text;
	sf::Font font;

	font.loadFromFile("fonts/pixel.ttf");

	tmx::MapLoader ml("maps");

	ml.Load("dev.tmx");

	text.setFont(font);
	text.setString("Health: ");
	text.setPosition(25, 25);
	text.setStyle(sf::Text::Style::Regular);

	while (window.isOpen()) // game loop
	{
		sf::Event evnt; // event

		while (window.pollEvent(evnt)) // check for events
		{
			//ditor.OpenMapEditor();

			if (evnt.type == sf::Event::Closed) // if pressed exit then window close
			{
				window.close();
			}
		}

		window.clear();
		window.draw(ml);
		window.draw(text);
		window.display();
	}

	return 0;
}
