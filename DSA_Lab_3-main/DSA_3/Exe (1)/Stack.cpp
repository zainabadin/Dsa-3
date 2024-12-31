#include "Stack.h"
#include <iostream>

Stack::Stack() {
    topNode = NULL;
}

void Stack::push(int val) {
    Node* newNode = new Node(val);
    newNode->next = topNode;
    topNode = newNode;
    cout << val << " pushed onto stack." << std::endl;
}

int Stack::pop() {
    if (isEmpty()) {
        cout << "Stack is empty. Cannot pop." << std::endl;
        return -1;
    } else {
        Node* temp = topNode;
        topNode = topNode->next;
        int poppedValue = temp->value;
        delete temp;
        cout << poppedValue << " popped from stack." << std::endl;
        return poppedValue;
    }
}

bool Stack::isEmpty() {
    return topNode == NULL;
}

int Stack::top() {
    if (isEmpty()) {
        cout << "Stack is empty. No top element." << std::endl;
        return -1;
    }
    return topNode->value;
}

void Stack::display() {
    if (isEmpty()) {
        cout << "Stack is empty." << std::endl;
    } else {
        Node* temp = topNode;
        cout << "Stack: ";
        while (temp != NULL) {
            cout << temp->value << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << std::endl;
    }
}

Stack::~Stack() {
    while (!isEmpty()) {
        pop();
    }
}
