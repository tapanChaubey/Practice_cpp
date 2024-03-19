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
 void kthlevel(Node * root, int k){
     if(root==NULL){
        return ;
    }
//     if(level==k){
//         cout<<root->data<<"-";
//        return;
//     }

// kthlevel(root->left,level+1,k);
    // kthlevel(root->right,level+1,k);
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    int l=1;
    while(!q.empty()){
        Node* curr=q.front();
        q.pop();
        if(curr==NULL){
            if(q.empty()){
               break;
            }
            else{
                l++;
                q.push(NULL);
            }
        }
        else{
            if(l==k){
                cout<<curr->data<<"-";
            }
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
    bt.root=bt.bulit();
    //bt.printInordered(bt.root);
    bt.kthlevel(bt.root,3);


}