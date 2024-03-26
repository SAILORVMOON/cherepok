#include "SimpleGameObject.h"

SimpleGameObject::SimpleGameObject() {
	hitbox = new sf::RectangleShape();
	(*hitbox).setSize(sf::Vector2f(100, 100));
	(*hitbox).setPosition(sf::Vector2f(0, 0));
	(*hitbox).setFillColor(sf::Color(255, 0, 0));
}
SimpleGameObject::SimpleGameObject(float xSize, float ySize) {
	hitbox = new sf::RectangleShape();
	(*hitbox).setSize(sf::Vector2f(xSize, ySize));
	(*hitbox).setPosition(sf::Vector2f(0, 0));
	(*hitbox).setFillColor(sf::Color(255, 0, 0));
}
SimpleGameObject::SimpleGameObject(float xSize, float ySize, float xPos, float yPos) {
	hitbox = new sf::RectangleShape();
	(*hitbox).setSize(sf::Vector2f(xSize, ySize));
	(*hitbox).setPosition(sf::Vector2f(xPos, yPos));
	(*hitbox).setFillColor(sf::Color(255, 0, 0));
}

float SimpleGameObject::getXPos() {
	return (*hitbox).getPosition().x;
}
float SimpleGameObject::getYPos() {
	return (*hitbox).getPosition().y;
}
float SimpleGameObject::getXSize() {
	return (*hitbox).getSize().x;
}
float SimpleGameObject::getYSize() {
	return (*hitbox).getSize().y;
}

sf::RectangleShape* SimpleGameObject::getHitbox() {
	return hitbox;
}
