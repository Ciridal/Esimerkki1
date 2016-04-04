#pragma once
#include <SFML\Graphics.hpp>

using namespace sf;

class Player
{	

public:

	CircleShape graphics;

	Player();
	~Player();

	void Update(Clock& clock);
	void Draw(RenderWindow& window);
	
};

