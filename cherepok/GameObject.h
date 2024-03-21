#pragma once
#include <SFML/Graphics.hpp>
class GameObject {
public:
	GameObject();
	GameObject(float xSize, float ySize);
	GameObject(float xSize, float ySize, float xPos, float yPos);

	float getXPos();
	float getYPos();
	float getXSize();
	float getYSize();
protected:
	sf::RectangleShape hitbox;
};

