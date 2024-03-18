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
root=newNode;
return root;
}
int Sum(Node * root){
    if(root==NULL){
        return 0;
    }
    int LSum=Sum(root->left);
    int RSum=Sum(root->right);
    return LSum+RSum+root->data;

}


};
int main(){
    Bainry bt;
    bt.built();
    cout<<bt.Sum(bt.root);
    return 0;
}