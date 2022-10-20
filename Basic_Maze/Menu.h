#pragma once

#include "Button.h"
#include <vector>
class Menu
{
private:			
	int menu;
	//Text text;
	//Button button;
	std::vector<Button> list_buttons;
	std::vector<Text> list_texts;


public:
	void setMenu(int menu);
	void MainMenu();
	void menuButtonPressed(sf::Vector2i MousePos);
	void menuButtonDepressed(sf::Vector2i MousePos);
	void menuButtonStyle(int Style);
	void draw(sf::RenderWindow *window);


};

