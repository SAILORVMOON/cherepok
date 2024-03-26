#pragma once

#include "SFML/Graphics.hpp"

class Node {
public:
	Node(sf::RectangleShape* node);

	sf::RectangleShape* getNode();

	Node* next = nullptr;
	Node* prev = nullptr;

private:
	 sf::RectangleShape* value;
};
