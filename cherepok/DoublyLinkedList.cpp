#include "DoublyLinkedList.h"
#include <SFML/Graphics.hpp>


DoublyLinkedList::DoublyLinkedList() {
    empty = true;
    listSize = 0;
    first = nullptr;
    last = nullptr;
}
DoublyLinkedList::DoublyLinkedList(Node* n) {
    empty = false;
    listSize = 1;
    first = n;
    last = n;
}

Node* DoublyLinkedList::getNode(int i) {
    Node* n = first;
    for (int j = 0; j < i; j++) {
        n = (*n).next;
    }
    return n;
}
void DoublyLinkedList::insert(int index, sf::RectangleShape* node) {
    Node* ins = new Node(node);
    if (index == 0) {
        insertBegin(node);
    } else if (index == listSize) {
        insertEnd(node);
    } else {
        Node* near = getNode(index - 1);
        (*ins).next = near;
        (*ins).prev = (*near).prev;
        (*(*ins).prev).next = ins;
        (*(*ins).next).prev = ins;
        listSize++;
    }
}
void DoublyLinkedList::insertBegin(sf::RectangleShape* node) {
    Node* ins = new Node(node);
    if (listSize == 0) {
        (*ins).prev = nullptr;
        (*ins).next = nullptr;
        first = ins;
        last = ins;
    } else {
        (*first).prev = ins;
        (*ins).next = first;
        first = ins;
    }
    listSize++;
}
void DoublyLinkedList::insertEnd(sf::RectangleShape* node) {
    Node* ins = new Node(node);
    if (listSize == 0) {
        (*ins).prev = nullptr;
        (*ins).next = nullptr;
        first = ins;
        last = ins;
    } else {
        (*last).next = ins;
        (*ins).prev = last;
        last = ins;
    }
    listSize++;
}
void DoublyLinkedList::remove(int index) {
    if (index == 0) {
        removeBegin();
    } else if (index == listSize - 1) {
        removeEnd();
    } else {
        Node* current = getNode(index);
        (*(*current).next).prev = (*current).prev;
        (*(*current).prev).next = (*current).next;
        delete current;
        listSize--;
    }
}
void DoublyLinkedList::removeBegin() {
    if (listSize == 1) {
        delete first;
        last = nullptr;
        first = nullptr;
    } else {
        first = (*first).next;
        delete (*first).prev;
        (*first).prev = nullptr;
    }
    listSize--;
}
void DoublyLinkedList::removeEnd() {
    if (listSize == 1) {
        delete first;
        last = nullptr;
        first = nullptr;
    } else {
        last = (*last).prev;
        delete (*last).next;
        (*last).next = nullptr;
    }
    listSize--;
}
int DoublyLinkedList::size() const {
    return listSize;
}