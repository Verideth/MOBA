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

<<<<<<< HEAD
//class MapEditor
//{
//public:
//	void OpenMapEditor();
//	sf::Vector2f Snap(sf::RenderWindow& mapEditor);
//	sf::Color Color();
//
//private:
//	MapGUI gui;
//	Player player;
//	sf::Mouse mouse;
//	sf::RectangleShape rectShape;
//	sf::RectangleShape graphBar;
//	sf::CircleShape circleShape;
//	tgui::Button::Ptr button = std::make_shared<tgui::Button>();
//};
=======
class MapEditor
{
public:
	void OpenMapEditor();
	sf::Vector2f Snap(sf::RenderWindow& mapEditor);
	sf::Color Color();

private:
	MapGUI gui;
	Player player;
	sf::Mouse mouse;
	sf::RectangleShape rectShape;
	sf::RectangleShape graphBar;
	sf::CircleShape circleShape;
	tgui::Button::Ptr button = std::make_shared<tgui::Button>();
};
>>>>>>> origin/master

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
	//MapEditor editor;
};
