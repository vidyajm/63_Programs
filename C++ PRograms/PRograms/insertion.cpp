#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to insert at the beginning
void insertAtBeginning(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// Function to insert at the end
void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to insert at a specific position
void insertAtPosition(Node*& head, int value, int position) {
    if (position < 1) {
        cout << "Invalid position!" << endl;
        return;
    }

    Node* newNode = new Node;
    newNode->data = value;

    if (position == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;
    for (int i = 1; i < position - 1; ++i) {
        if (temp == nullptr) {
            cout << "Position out of range!" << endl;
            return;
        }
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// Function to print the linked list
void printList(Node* head) {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }

    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    // Inserting at the beginning
    insertAtBeginning(head, 10);
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 30);
    cout << "After inserting at the beginning: ";
    printList(head);

    // Inserting at the end
    insertAtEnd(head, 40);
    insertAtEnd(head, 50);
    cout << "After inserting at the end: ";
    printList(head);

    // Inserting at a specific position
    insertAtPosition(head, 25, 3);
    cout << "After inserting at position 3: ";
    printList(head);

    insertAtPosition(head, 35, 5);
    cout << "After inserting at position 5: ";
    printList(head);

    return 0;
}
