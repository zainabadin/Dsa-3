

#include "Node.h"

class Stack {
private:
    Node* topNode;

public:
    Stack();
    void push(int val);
    int pop();
    bool isEmpty();
    int top();
    void display();
    ~Stack();
};

#endif
