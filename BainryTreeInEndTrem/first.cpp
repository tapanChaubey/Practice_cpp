#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    Node* left;
    Node* right;
    int data;

    Node(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};

class BinaryTree {
public:
    Node* root;
    int i;

    BinaryTree() {
        root = NULL;
        i = 0;  // Initialize i to 0 in the constructor
    }

    Node* buildTree(int arr[], int n) {
        if (i >= n || arr[i] == -1) {
            i++;  // Move to the next element in the array
            return NULL;
        }
        Node* newNode = new Node(arr[i++]);  // Create a new node and increment i
        newNode->left = buildTree(arr, n);
        newNode->right = buildTree(arr, n);
        return newNode;
    }

    void print(Node* root) {
        if (root == NULL) {
            return;
        }
        queue<Node*> q;
        q.push(root);
        q.push(NULL);
        while (!q.empty()) {
            Node* curr = q.front();
            q.pop();
            if (curr == NULL) {
                if (q.empty()) {
                    break;
                } else {
                    cout << endl;  // New line between levels
                    q.push(NULL);
                }
            } else {
                cout << curr->data << " ";
                if (curr->left != NULL) {
                    q.push(curr->left);
                }
                if (curr->right != NULL) {
                    q.push(curr->right);
                }
            }
        }
    }
};

int main() {
    BinaryTree BT;
    int arr[] = {1, 2, 3, 4, -1, -1, 5, -1, -1, 6, 7, -1, -1, -1};
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array
    BT.root = BT.buildTree(arr, n);
    BT.print(BT.root);
    return 0;
}
