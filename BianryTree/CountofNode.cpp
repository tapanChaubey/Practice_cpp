#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node * right;
    Node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};
class Bainry{
    public:
    Node * root;
    Bainry(){
        root=NULL;
    }
    Node * built(){
        int d;
        cin>>d;
        if(d==-1){
            return NULL;
        }
        Node * newNode=new Node(d);
        newNode->left=built();
        newNode->right=built();
        root= newNode;
        return root;

    }
    int Count(Node * root){
        if(root==NULL){
            return 0;
        }
        int LC=Count(root->left);
        int RC=Count(root->right);
        return LC+RC+1;
    }
};

int main(){
    Bainry bt;
    bt.built();
   cout<<bt.Count(bt.root);








    return 0;
}