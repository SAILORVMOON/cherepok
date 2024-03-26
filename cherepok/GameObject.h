#pragma once
#include "DoublyLinkedList.h"
#include <SFML/Graphics.hpp>

class GameObject {
public:
	GameObject();

	void addWall(sf::RectangleShape* wall);



protected:
	DoublyLinkedList simpleObjects;
};

