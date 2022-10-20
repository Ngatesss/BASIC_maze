#pragma once

#include <iostream>
#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"
#include "SFML/Window.hpp"
#include "Menu.h"



// Class that act has the game engine

class Game
{
private:
	//private Variables
	//window
	sf::RenderWindow* window;
	sf::Event event;
	sf::VideoMode VideoMode;

	//Mouse Position
	sf::Vector2i mousePosWindow;
	bool mouseLeft;


	//Menu
	Menu menu;
	Text text;
	Button button;


	//private function
	void initVariables();
	void initWindow();

public:
	//constructor + destructor
	Game();
	virtual ~Game();
	
	//Accessors
	const bool running() const;


	// Function
	void pollEvents();
	void updateMousePositions();
	void update();
	void render();
};

