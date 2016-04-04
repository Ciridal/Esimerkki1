#include "Player.h"
#include <iostream>

Player::Player()
{
	graphics = CircleShape(10);
	
}


Player::~Player()
{
}

void Player::Update(Clock& clock)
{
/*	if (clock.getElapsedTime().asSeconds() >= 2)
	{
		std::cout << "hello";
		clock.restart();
	}*/

	float speed = 500;
	if (Keyboard::isKeyPressed(Keyboard::Right))
	{
		
		graphics.move(Vector2f(speed*clock.getElapsedTime().asSeconds(), 0.0f));
	}

	if (Keyboard::isKeyPressed(Keyboard::Left))
	{

		graphics.move(Vector2f(-speed*clock.getElapsedTime().asSeconds(), 0.0f));
	}

	if (Keyboard::isKeyPressed(Keyboard::Up))
	{

		graphics.move(Vector2f(-speed*clock.getElapsedTime().asSeconds(), 0.0f));
	}

	if (Keyboard::isKeyPressed(Keyboard::Down))
	{

		graphics.move(Vector2f(-speed*clock.getElapsedTime().asSeconds(), 0.0f));
	}
}

void Player::Draw(RenderWindow& window)
{
	window.draw(graphics);
}