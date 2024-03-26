#include "Node.h"
Node::Node(sf::RectangleShape* node) {
	value = node;
}

sf::RectangleShape* Node::getNode() {
	return value;
}
