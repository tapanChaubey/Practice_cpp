#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;
    Node(int d) {
        data = d;
        next = NULL;
        prev = NULL;
    }
};

class Doublylinked {
public:
    Node* head;
    Node* tail;
    Doublylinked() {
        head = NULL;
        tail = NULL;
    }
    void insertAthead(int n) {
        Node* newNode = new Node(n);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
    }
    void display() {
        Node* temp1 = head;
        while (temp1 != NULL) {
            cout << temp1->data << " ";
            temp1 = temp1->next;
        }
        
    }
};

int main() {
    Doublylinked list;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        list.insertAthead(x);
    }
    list.display();

    return 0;
}
