#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Player.h"

using namespace sf;

class Game
{
	

public:
	
	RenderWindow* window;
	Player* player;
	Clock clock;



	Game();
	~Game();

	void Update();
	void Draw();
};

