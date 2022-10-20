#pragma once

#include <iostream>
#include "SFML/Graphics/Text.hpp"
#include "SFML/Graphics.hpp"

	class Text
	{
	private:
		sf::Font font;
		sf::Font *pFont;
		sf::Text text;
	public:
		void loadFont(std::string police);
		void setData(std::string Ttext, sf::Vector2f pos, int alignment = 0, sf::Color color = sf::Color::Black, int TestSize = 50);
		void setFont(sf::Font *Ffont);
		sf::Font getFont();
		void draw(sf::RenderWindow* window);

	};

