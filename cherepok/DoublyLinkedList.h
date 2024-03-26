#pragma once
#include "Node.h"
class DoublyLinkedList {
public:
    DoublyLinkedList();
    DoublyLinkedList(Node* n);

    void insert(int index, sf::RectangleShape* node);
    void insertBegin(sf::RectangleShape* node);
    void insertEnd(sf::RectangleShape* node);
    void remove(int index);
    void removeBegin();
    void removeEnd();
    int size() const;
    Node* getNode(int index);

private:
    bool empty;
    int listSize;
    Node* first;
    Node* last;
    Node* temp;
};