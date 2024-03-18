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
    Node *root;
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

   void leveorder(Node * root){
    if(root==NULL){
        return ;
    }
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node *curr=q.front();
        q.pop();
        if(curr==NULL){
            cout<<endl;
            if(q.empty()){
                break;
            }
            else{
                q.push(NULL);
            }
        }
        else{
            cout<<curr->data<<" ";
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }
        }
    }





   }

};
int main(){
    Bainry bt;
    bt.root=bt.built();
    bt.leveorder(bt.root);




    return 0;
}