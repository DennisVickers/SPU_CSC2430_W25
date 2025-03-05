#include <iostream>
#include <string>

using namespace std;

// Define a self-referencing struct for a singly linked list
struct Node {
    int key; // Key value in pair
    string value; // Data stored in the node
    Node* next;  // Pointer to the next node (self-referencing)

    // Constructor to initialize a node
    Node(const int& key, const string& value) : key(key), value(value), next(nullptr) {};
};

// Function to add a node to the end of the linked list
void append(Node*& head, const int key, const string& value) {
    Node* newNode = new Node(key, value);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to display the linked list
void displayList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->key << ": ";
        cout << temp->value << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}

// Function to free allocated memory
void freeList(Node*& head) {
    Node* temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    Node* head = nullptr;

    // Append some nodes to the linked list
    append(head, 1, "Node");
    append(head, 2, "Node");
    append(head, 3, "Node");

    // Display the linked list
    displayList(head);

    // Free memory
    freeList(head);

    return 0;
}
