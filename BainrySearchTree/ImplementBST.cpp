#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node * right;
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
Node * built(Node * root,int d){
    
    if(root==NULL){
        return new Node(d);
    }
    else if(root->data<d){
       root->right=built(root->right,d);
    }
    else{
        root->left=built(root->left,d);
    }
    return root;



    
}
void print(Node * root){
    // if(root==NULL){
    //     return;
    // }
    // print(root->left);
    // cout<<root->data<<"-";
    // print(root->right);
    //level ordered
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node * curr=q.front();
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
            cout<<curr->data<<"----";
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
    BST bt;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        int d;
        cin>>d;
        bt.root=bt.built(bt.root,d);

    }
  
  bt.print(bt.root);
    return 0;
}