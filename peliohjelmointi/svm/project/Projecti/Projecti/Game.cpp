#include "Game.h"


Game::Game()
{
	window = new RenderWindow(VideoMode(200, 200), "window");
	player = new Player();
	clock.restart();
}


Game::~Game()
{
	delete player;
	delete window;
}

void Game::Update()
{
	while (window->isOpen())
	{


		Event event;
		while (window->pollEvent(event))
		{
			if (event.type == Event::Closed)
				window->close();
		}

		player->Update(clock);

		Draw();
		clock.restart();
	}

}

void Game::Draw()
{
	window->clear();
	

	player->Draw(*window);

	window->display();
}