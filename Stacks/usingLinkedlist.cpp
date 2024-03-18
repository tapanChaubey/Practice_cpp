#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};

class Stacks {
public:
    Node* head;
    int size;
    int count = -1;

    Stacks(int s) {
        size = s;
        head = NULL;
    }

    void push(int val) {
        Node* newNode = new Node(val);
        if (isFull()) {
            cout << " overflow";
            delete newNode; 
            return;
        }
        newNode->next = head;
        head = newNode;
        count++;
    }

    int pop() {
        if (isEmpty()) {
            cout << "underflow";
            return -1;
        }
        Node* node = head;
        int d = node->data;
        head = head->next;
        delete node; // Delete the popped node to avoid memory leak
        count--;
        return d;
    }

    int isFull() {
        return count == size - 1;
    }

    int isEmpty() {
        return head == NULL;
    }

    int printTop() {
        if (!isEmpty()) {
            int d = head->data;
            return d;
        }
        return -1; // Indicate that the stack is empty
    }
};

int main() {
    Stacks st(6);
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.printTop() << endl;
    st.push(4);
    st.push(5);
    cout << st.printTop() << endl;
    st.push(6);
    cout << st.printTop() << endl;
     st.push(8); // Uncommenting this line would cause an overflow
    cout << st.pop() << endl;
    cout << st.pop() << endl;
    cout << st.pop() << endl;

    return 0;
}
