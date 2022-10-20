#include "Menu.h"

void Menu::setMenu(int menu)
{
	if (menu == 0)
	{
		MainMenu();
	}
}

void Menu::MainMenu()
{
	Button button;
	Text text;
	text.loadFont("arial.ttf");
	
	
	button.data(sf::Vector2f(1000.f, 100), 1920 / 2 - 500, 400, "PLAY\n",text.getFont());
	this->list_buttons.push_back(button);

}

void Menu::menuButtonPressed(sf::Vector2i MousePos)
{
	for (auto& button : this->list_buttons)
	{
		button.isPressed(MousePos);
	}
}
void Menu::menuButtonDepressed(sf::Vector2i MousePos)
{
	for (auto& button : this->list_buttons)
	{
		button.isDepressed(MousePos);
	}
}
void Menu::menuButtonStyle(int Style)
{
	for (auto& button : this->list_buttons)
	{
		button.setStyle(Style);
	}
}


void Menu::draw(sf::RenderWindow *window)
{
	for (auto& button : list_buttons)
	{
		button.draw(window);
	}
	for (auto& text : list_texts)
	{
		text.draw(window);
	}

}