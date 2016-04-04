#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include "Game.h"

int main()
{



	Game game;
	game.Update();

	/*
	sf::RenderWindow window(sf::VideoMode(500, 500), "Illuminati confirmed!");
	sf::CircleShape triangle(250,3);
	triangle.setFillColor(sf::Color(100, 250, 50));


	sf::Texture texture;
	if (!texture.loadFromFile("C:\\Users\\SinjaMon\\Desktop\\peliohjelmointi\\svm\\project\\Projecti\\confirmed.png"))
	{
		
	}

	triangle.setTexture(&texture);

	sf::Music music;

	if (music.openFromFile("C:\\Users\\SinjaMon\\Desktop\\peliohjelmointi\\svm\\project\\Projecti\\illuminatisound.ogg"))
	{
		music.play();
	}
		

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(triangle);
		window.display();
	*/

	return 0;
}