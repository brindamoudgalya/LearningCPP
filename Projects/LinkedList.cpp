#include <iostream>

struct Node {
    int val;
    Node* next = nullptr;
};

void reverseList (Node* head);


int main() {
    Node* n = new Node; // main node pointer
    Node* t; // temp
    Node* h; // head

    n -> val = 1;
    t = n;
    h = n; // h stays forever

    for (int i = 2; i < 11; i++) {
        n = new Node;
        n -> val = i;
        t -> next = n;
        t = n;
    }

    Node* curr = new Node;
    curr = h;
    while (curr) {
        std::cout << curr -> val << " ";
        curr = curr -> next;
    }
    std::cout << std::endl;

    reverseList(h);
    return 0;
}

void reverseList (Node* head) {
    Node* prev = new Node;
    prev = nullptr;

    while (head) {
        Node* next = head -> next;
        head -> next = prev;
        prev = head;
        head = next;
    }

    Node* curr = new Node;
    curr = prev;
    while (curr) {
        std::cout << curr -> val << " ";
        curr = curr -> next;
    }
    std::cout << std::endl;
}