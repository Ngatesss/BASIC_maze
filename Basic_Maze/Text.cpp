#include "Text.h"


	void Text::loadFont(std::string fontPath)
	{
		if (!this->font.loadFromFile(fontPath))
		{
			std::cout << "Font load Error\n";
		}
	}
	void Text::setData(std::string Ttext, sf::Vector2f pos, int alignment, sf::Color color, int textSize)
	{
		this->text.setString(Ttext);
		this->text.setCharacterSize(textSize);
		this->text.setFillColor(color);
		if (alignment == 0)
		{
			this->text.setPosition(pos);
		}
		else if (alignment == 1)
		{
			this->text.setPosition(pos - sf::Vector2f(this->text.getLocalBounds().width / 2, this->text.getLocalBounds().height / 2));
		}
		else if (alignment == 2)
		{
		}
	}

	void Text::setFont(sf::Font *Ffont)
	{
		this->pFont = &this->font;
		*this->pFont = *Ffont;
		this->text.setFont(this->font);
	}
	sf::Font Text::getFont()
	{
		return this->font;
	}

	void Text::draw(sf::RenderWindow* window)
	{
		window->draw(this->text);
	}
