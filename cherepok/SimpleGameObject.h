#pragma once
#include <SFML/Graphics.hpp>
class SimpleGameObject {
public:
	SimpleGameObject();
	SimpleGameObject(float xSize, float ySize);
	SimpleGameObject(float xSize, float ySize, float xPos, float yPos);

	float getXPos();
	float getYPos();
	float getXSize();
	float getYSize();

	sf::RectangleShape* getHitbox();

protected:
	sf::RectangleShape* hitbox;
};

