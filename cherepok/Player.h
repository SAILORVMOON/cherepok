#pragma once
#include "GameObject.h"
class Player {
public:
	Player();
	Player(float xSize, float ySize);
	Player(float xSize, float ySize, float xPos, float yPos);


	float getXPos();
	float getYPos();
	float getXSize();
	float getYSize();


	void move(float x, float y);
	sf::RectangleShape* draw();
protected:
	sf::RectangleShape* hitbox;
	std::string name;
};

