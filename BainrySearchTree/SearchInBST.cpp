#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node * left;
    Node * right;
    int data;
    Node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};
class BST{
    public:
    Node * root;
    BST(){
        root=NULL;
    }
 Node * built(Node * root,int val){
    if(root==NULL){
        return new Node(val);
    }
    else if(val>root->data){
        root->right=built(root->right,val);
    }
    else{
        root->left=built(root->left,val);
    }
    return root;
 }
 void print(Node * root){
    if(root==NULL){
        return;
    }
    print(root->left);
    cout<<root->data;
    print(root->right);
    
 }
 Node * SearchNode(Node * root,int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    else if(root->data>key){
        return SearchNode(root->left,key);
    }
    else{
        return SearchNode(root->right,key);
    }
    

 }   

};
int main(){
    BST bt;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        int d;
        cin>>d;
        bt.root=bt.built(bt.root,d);
    }
    cout<<bt.SearchNode(bt.root,5)->data;
    cout<<endl;
    bt.print(bt.root);
    return 0;            
}