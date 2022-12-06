#include "input.h"

// =====================
//  Protected Functions
// =====================

// For getting Mouse and Keyboard Input
void Input::input(sf::RenderWindow& _window) {
	this->mousePosMod = 16 * (Global::WIN_SCALE + this->fullscreen);

	if (sf::Mouse::isButtonPressed(sf::Mouse::Left) and !this->kMouseL)
		this->kMouseLP = true;
	else
		this->kMouseLP = false;

	if (sf::Mouse::isButtonPressed(sf::Mouse::Right) and !this->kMouseR)
		this->kMouseRP = true;
	else
		this->kMouseRP = false;

	if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		this->kMouseL = true;
	else
		this->kMouseL = false;

	if (sf::Mouse::isButtonPressed(sf::Mouse::Right))
		this->kMouseR = true;
	else
		this->kMouseR = false;

	this->kMouse = sf::Mouse::getPosition(_window);
/*
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) and !this->kUp)
		this->kUpP = true;
	else
		this->kUpP = false;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) and !this->kDown)
		this->kDownP = true;
	else
		this->kDownP = false;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) and !this->kLeft)
		this->kLeftP = true;
	else
		this->kLeftP = false;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) and !this->kRight)
		this->kRightP = true;
	else
		this->kRightP = false;*/

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		this->kUp = true;
	else
		this->kUp = false;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		this->kDown = true;
	else
		this->kDown = false;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		this->kLeft = true;
	else
		this->kLeft = false;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		this->kRight = true;
	else
		this->kRight = false;

	if (this->kUp or this->kDown or this->kLeft or this->kRight)
		this->kInput = true;
	else
		this->kInput = false;
}