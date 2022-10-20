#include "Game.h"


// Private Function
void Game::initVariables()
{
	this->window = nullptr;
	this->mouseLeft = false;
	menu.setMenu(0);
}

void Game::initWindow()
{
	this->VideoMode.width = 1920;
	this->VideoMode.height = 1080;
	//this->VideoMode.getDesktopMode();
	this->window = new sf::RenderWindow(this->VideoMode, "Basic Maze",sf::Style::Fullscreen );
	this->window->setFramerateLimit(144);
}


// Construtor + destructor
Game::Game()
{
	this->initVariables();
	this->initWindow();
}

Game::~Game()
{
	delete this->window;
}


//Accessors
const bool Game::running() const
{
	return this->window->isOpen();
}



//Function

void Game::pollEvents()
{
	while(this->window->pollEvent(this->event))
	{
		if (this->event.type == sf::Event::Closed)
		{
			this->window->close();
		}
		if (!sf::Mouse::isButtonPressed(sf::Mouse::Left) && mouseLeft)  // Left Mouse Released
		{
			this->menu.menuButtonDepressed(mousePosWindow);
			mouseLeft = false;
		}
		if (!sf::Mouse::isButtonPressed(sf::Mouse::Left))              //  Left Mouse not Pressed
		{
			this->menu.menuButtonStyle(0);
		}
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))				//Left Mouse Pressed
		{

			this->menu.menuButtonPressed(mousePosWindow);
			mouseLeft = true;
		}
	}



}

void Game::updateMousePositions()
{
	this->mousePosWindow = sf::Mouse::getPosition(*this->window);
}

void Game::update()
{
	this->pollEvents();
	this->updateMousePositions();
}

void Game::render()
{
	this->window->clear(sf::Color::White);

	//Draw Game Object //this->window->draw(sf::RectangleShape(sf::Vector2f(100, 200)));
	
	menu.draw(this->window);
	
	
	//button.draw(this->window);
	this->window->display();

}


