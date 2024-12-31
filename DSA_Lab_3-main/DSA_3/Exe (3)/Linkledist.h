
#include "Node.h"

class LinkedList {
private:
    Node* head;

public:
    LinkedList();
    void insert(char val);
    void display();
    Node* getHead();  // Added getter to access the head
    ~LinkedList();
};
