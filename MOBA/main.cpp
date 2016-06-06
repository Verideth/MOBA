#include <SFML\Graphics.hpp>
#include <iostream>

#include "Drawing.h"
#include "Localplayer.h"
#include "Mapeditor.h"

Player ply;

MapEditor editor;

int main(int* argc, char** argv)
{
	sf::RenderWindow window(sf::VideoMode(sf::VideoMode::getDesktopMode().width, sf::VideoMode::getDesktopMode().height), "Battle of Hecarix");

	while (window.isOpen()) // game loop
	{
		sf::Event evnt; // event
		
		while (window.pollEvent(evnt)) // check for events
		{
			editor.OpenMapEditor();

			if (evnt.type == sf::Event::Closed) // if pressed exit then window close
				window.close();
		}

		window.clear();
		window.draw(ply.DrawPlayer(50, 50, 25, 200, sf::Color(255, 0, 255, 255)));
		window.display();
	}

	return 0;
}
