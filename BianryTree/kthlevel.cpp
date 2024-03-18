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
 Node * bulit(){
    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }
      Node * newnode=new Node(d);
      newnode->left=bulit();
      newnode->right=bulit();
      return newnode;
 }
 void printInordered(Node * root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<"-";
    printInordered(root->left);
    printInordered(root->right);
 }
void kthlevel(Node * root,int level, int k){
    if(root==NULL){
        return ;
    }
    if(level==k){
        cout<<root->data<<"-";
       return;
    }

    kthlevel(root->left,level+1,k);
    kthlevel(root->right,level+1,k);

}
 



};
int main(){
    Bainry bt;
    bt.root=bt.bulit();
    //bt.printInordered(bt.root);
    bt.kthlevel(bt.root,1,3);


}