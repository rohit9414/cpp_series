#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int value) {
        data = value;
        next = NULL;
    }
};

// Insert at beginning
void insertNode_at_Beginning(int value, node*& head) {

    node* temp = new node(value);

    temp->next = head;
    head = temp;
}

// Print linked list
void printList(node* head) {

    node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

// Reverse linked list
void reverseList(node*& head) {

    node* prev = NULL;
    node* curr = head;

    while (curr != NULL) {

        node* next = curr->next;

        curr->next = prev;

        prev = curr;
        curr = next;
    }

    head = prev;
}

int main() {

    node* head = NULL;

    // Insert values
    insertNode_at_Beginning(10, head);
    insertNode_at_Beginning(20, head);
    insertNode_at_Beginning(30, head);
    insertNode_at_Beginning(40, head);

    cout << "Original List: ";
    printList(head);

    // Reverse
    reverseList(head);

    cout << "Reversed List: ";
    printList(head);

    return 0;
}