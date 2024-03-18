#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node * left;
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
        return newNode;
    }
    void Inorder(Node * root){
        if(root==NULL){
            return;
        }
        Inorder(root->left);
        cout<<root->data<<"->";
        Inorder(root->right);

    }
};
int main(){
    Bainry bt;
    bt.root=bt.built();
    bt.Inorder(bt.root);


    return 0;
}