#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* next;
    node(int d) {
        data = d;
        next = NULL;
    }
};

class Linkedlist {
public:
    node* head;
    node* tail;
    Linkedlist() {
       head = NULL;
       tail = NULL;
    }

    void insert(int v) {
        node* newnode = new node(v);
        if (head == NULL) {
            head = newnode;
            tail = newnode;
            return;
        }
        node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
        tail = newnode;
    }

    void display() {
        node* curr = head;
        while (curr != NULL) {
            cout << "->" << curr->data << " ";
            curr = curr->next;
        }
        cout << "->" << "NULL";
        cout << endl;

        cout << "tail->" << tail->data;
        cout << endl;
    }

    int lll(node* &slow, node* &fast) {
        int c = 1;  // Initialize the size to 1, as we already know there is a loop
        fast = fast->next;
        while (fast != slow) {
            c++;
            fast = fast->next;
        }
        return c;
    }

    int fun(node* &head) {
        node* slow = head;
        node* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (fast == slow) {
                return lll(slow, fast);
            }
        }
        return 0;
    }
};

int main() {
    Linkedlist ll;
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        ll.insert(i);
    }
    ll.display();
    ll.tail->next = ll.head->next->next;

    cout << "size of loop=" << ll.fun(ll.head) << endl;
    return 0;
}
