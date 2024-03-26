#include "GameObject.h"

GameObject::GameObject() {
	simpleObjects = DoublyLinkedList();
}

void GameObject::addWall(sf::RectangleShape* wall) {
	simpleObjects.insertEnd(wall);
}
