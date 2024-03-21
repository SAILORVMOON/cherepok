#include "GameObject.h"

GameObject::GameObject() {
	hitbox = sf::RectangleShape();
	hitbox.setSize(sf::Vector2f(100, 100));
	hitbox.setPosition(sf::Vector2f(0, 0));
	hitbox.setFillColor(sf::Color(255, 0, 0));
}
GameObject::GameObject(float xSize, float ySize) {
	hitbox = sf::RectangleShape();
	hitbox.setSize(sf::Vector2f(xSize, ySize));
	hitbox.setPosition(sf::Vector2f(0, 0));
	hitbox.setFillColor(sf::Color(255, 0, 0));
}
GameObject::GameObject(float xSize, float ySize, float xPos, float yPos) {
	hitbox = sf::RectangleShape();
	hitbox.setSize(sf::Vector2f(xSize, ySize));
	hitbox.setPosition(sf::Vector2f(xPos, yPos));
	hitbox.setFillColor(sf::Color(255, 0, 0));
}

float GameObject::getXPos() {
	return hitbox.getPosition().x;
}
float GameObject::getYPos() {
	return hitbox.getPosition().y;
}
float GameObject::getXSize() {
	return hitbox.getSize().x;
}
float GameObject::getYSize() {
	return hitbox.getSize().y;
}
