#include<iostream>
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
    int count=0;
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
        Node * newnode=new Node(d);
        newnode->left=built();
        newnode->right=built();
        return newnode;
    }
    void postordered(Node * root){
        
        if(root==NULL){
            return;
        }
        postordered(root->left);
        postordered(root->right);
        count++;
        cout<<root->data<<" ";

    }
   
};
int main(){
    Bainry bt;
    bt.root=bt.built();
    bt.postordered(bt.root);


    return 0;
}