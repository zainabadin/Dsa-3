#include "LinkedList.h"
#include <iostream>

using namespace std;

int main() {
    LinkedList list;

    list.insert(5);
    list.display();

    list.insert(2);
    list.display();

    list.insert(7);
    list.display();

    list.insert(3);
    list.display();

    list.insert(1);
    list.display();

    return 0;
}
