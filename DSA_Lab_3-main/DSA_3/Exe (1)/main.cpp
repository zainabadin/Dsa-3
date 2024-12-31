#include "Stack.h"
#include <iostream>

int main() {
    Stack myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    myStack.display();

    myStack.pop();
    myStack.pop();

    cout << "Top element: " << myStack.top() << std::endl;

    myStack.pop();
    myStack.pop();

    myStack.display();

    return 0;
}
