#include "Button.h"

void Button::draw(sf::RenderWindow* window,sf::Color fillColor,sf::Color outLineColor)
{
	if (style == 0) 
	{
	sf::RectangleShape shape(this->size);
	shape.setPosition(posX, posY);
	shape.setOutlineColor(outLineColor);
	shape.setFillColor(fillColor);
	shape.setOutlineThickness(10);
	window->draw(shape);
	
	}
	else if(style == 1)
	{
	sf::RectangleShape shape(this->size - sf::Vector2f(10.f,10.f));
	shape.setPosition(posX+5, posY+5);
	shape.setOutlineColor(sf::Color::Black);
	shape.setFillColor(sf::Color::White);
	shape.setOutlineThickness(10);
	window->draw(shape);
	}
	this->text.draw(window);//, sf::Vector2f(posX + this->size.x/2, posY + +this->size.y / 2),1);
}

void Button::data(sf::Vector2f Size, float PosX, float PosY, std::string Ttext, sf::Font font)
{
	this->size = Size;
	this->posX = PosX;
	this->posY = PosY;
	this->text.setFont(&font);
	this->text.setData(Ttext, sf::Vector2f(this->posX + this->size.x / 2,
										   this->posY + +this->size.y / 2), 1);
}

void Button::isPressed(sf::Vector2i MousePos)
{
	if (MousePos.x< this->size.x + this->posX && MousePos.x > this->posX && MousePos.y< this->size.y + this->posY && MousePos.y > this->posY)
	{
		this->setStyle(1);
	}
}

void Button::isDepressed(sf::Vector2i MousePos)
{
	if (MousePos.x< this->size.x + this->posX && MousePos.x > this->posX && MousePos.y< this->size.y + this->posY && MousePos.y > this->posY)
	{
		this->setStyle(0);
	}
}

void Button::setStyle(char Style)
{
	this->style = Style;
}

/*void Button::buttonFunc(int numFunc)
{
	if (numFunc == 0)
	{
		
	}
	
}*/
