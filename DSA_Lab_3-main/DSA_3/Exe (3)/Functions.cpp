#include "Functions.h"

void concatenate(LinkedList& list1, LinkedList& list2) {
    Node* temp = list1.getHead();
    if (temp == NULL) {
        list1 = list2;
        return;
    }
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = list2.getHead();
}

LinkedList intersection(LinkedList& list1, LinkedList& list2) {
    LinkedList result;
    Node* temp1 = list1.getHead();
    Node* temp2;

    while (temp1 != NULL) {
        temp2 = list2.getHead();
        while (temp2 != NULL) {
            if (temp1->value == temp2->value) {
                result.insert(temp1->value);
                break;
            }
            temp2 = temp2->next;
        }
        temp1 = temp1->next;
    }
    return result;
}

int compare(LinkedList& list1, LinkedList& list2) {
    Node* temp1 = list1.getHead();
    Node* temp2 = list2.getHead();

    while (temp1 != NULL && temp2 != NULL) {
        if (temp1->value < temp2->value) {
            return -1;
        } else if (temp1->value > temp2->value) {
            return 1;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if (temp1 == NULL && temp2 == NULL) {
        return 0;
    } else if (temp1 == NULL) {
        return -1;
    } else {
        return 1;
    }
}
