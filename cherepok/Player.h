#pragma once
#include "GameObject.h"
class Player : public GameObject {
public:
	Player();
	Player(float xSize, float ySize);
	Player(float xSize, float ySize, float xPos, float yPos);

	void move(float x, float y);
	sf::RectangleShape draw();
protected:
	std::string name;
};

