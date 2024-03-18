#include<iostream>
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
    Node * newnode=new Node(d);
    newnode->left=built();
    newnode->right=built();
    return newnode;
}
int Hight(Node * root){
    if(root==NULL){
        return 0;
    }
    int lh=Hight(root->left);
    int rh=Hight(root->right);
    return max(lh,rh)+1;
}



};
int main(){
    Bainry bt;
  bt.root = bt.built();
 cout<<bt.Hight(bt.root);

    return 0;
}