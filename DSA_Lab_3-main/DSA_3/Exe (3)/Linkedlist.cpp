#include "LinkedList.h"
#include <iostream>

using namespace std;

LinkedList::LinkedList() {
    head = NULL;
}

void LinkedList::insert(char val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void LinkedList::display() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->value << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

Node* LinkedList::getHead() {
    return head;
}

LinkedList::~LinkedList() {
    Node* current = head;
    Node* nextNode;

    while (current != NULL) {
        nextNode = current->next;
        delete current;
        current = nextNode;
    }
}
