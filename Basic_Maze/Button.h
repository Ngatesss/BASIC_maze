#pragma once

#include <string>
#include "SFML/System.hpp"
#include "SFML/Graphics.hpp"
#include "Text.h"
//#include "Menu.h"


class Button
{
private:
	sf::Vector2f size = sf::Vector2f(0.f,0.f);
	float posX = 0 ;
	float posY = 0;
	
	Text text;
	
	char style = 0;
	

public:

	void draw(sf::RenderWindow* window,
		sf::Color fillColor = sf::Color::White,
		sf::Color outLineColor = sf::Color::Black);
	void data(sf::Vector2f Size , float PosX, float PosY, std::string text,sf::Font font);
	void isPressed(sf::Vector2i MousePos);
	void isDepressed(sf::Vector2i MousePos);
	void setStyle(char Style);
	//void buttonFunc(int numFunc, Menu menu = NULL);



};

