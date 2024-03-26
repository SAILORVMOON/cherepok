#include "Player.h"

Player::Player() {
	hitbox = new sf::RectangleShape();
	(*hitbox).setSize(sf::Vector2f(100, 100));
	(*hitbox).setPosition(sf::Vector2f(0, 0));
	(*hitbox).setFillColor(sf::Color(255, 255, 0));
}
Player::Player(float xSize, float ySize) {
	hitbox = new sf::RectangleShape();
	(*hitbox).setSize(sf::Vector2f(xSize, ySize));
	(*hitbox).setPosition(sf::Vector2f(0, 0));
	(*hitbox).setFillColor(sf::Color(255, 255, 0));
}
Player::Player(float xSize, float ySize, float xPos, float yPos) {
	hitbox = new sf::RectangleShape();
	(*hitbox).setSize(sf::Vector2f(xSize, ySize));
	(*hitbox).setPosition(sf::Vector2f(xPos, yPos));
	(*hitbox).setFillColor(sf::Color(255, 255, 0));
}

float Player::getXPos() {
	return (*hitbox).getPosition().x;
}

float Player::getYPos() {
	return (*hitbox).getPosition().y;
}

float Player::getXSize() {
	return (*hitbox).getSize().x;
}

float Player::getYSize() {
	return (*hitbox).getSize().y;
}

void Player::move(float x, float y) {
	(*hitbox).setPosition(sf::Vector2f((*hitbox).getPosition().x + x, (*hitbox).getPosition().y + y));
}

sf::RectangleShape* Player::draw() {
	return hitbox;
}
