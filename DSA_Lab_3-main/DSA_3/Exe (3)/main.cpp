#include "LinkedList.h"
#include "Functions.h"
#include <iostream>

using namespace std;

int main() {
    LinkedList list1, list2, result;

    list1.insert('a');
    list1.insert('c');
    list1.insert('e');

    list2.insert('b');
    list2.insert('c');
    list2.insert('d');

    cout << "List 1: ";
    list1.display();

    cout << "List 2: ";
    list2.display();

    cout << "Concatenating lists..." << endl;
    concatenate(list1, list2);
    list1.display();

    cout << "Finding intersection..." << endl;
    result = intersection(list1, list2);
    result.display();

    cout << "Comparing lists..." << endl;
    int cmp = compare(list1, list2);
    if (cmp == 0) {
        cout << "Lists are the same." << endl;
    } else if (cmp == 1) {
        cout << "List 1 is lexicographically greater." << endl;
    } else {
        cout << "List 2 is lexicographically greater." << endl;
    }

    return 0;
}
