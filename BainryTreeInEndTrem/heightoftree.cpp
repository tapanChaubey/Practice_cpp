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
class BainryTree{
    public:
    Node * root;
    BainryTree(){
        root=NULL;
    }
    // BUILD Tree
    Node * buildTree(){
        int d;
        cin>>d;
        if(d==-1){
            return NULL;
        }
        Node * newNode=new Node(d);
        newNode->left=buildTree();
        newNode->right=buildTree();
        return newNode;
    }
    //Hight of Node
    int Hight(Node * root){
        if(root==NULL){
            return 0;
        }
        int lh=Hight(root->left);
        int rh=Hight(root->right);
        return max(lh,rh)+1;

    }
    // count of Node
int countNode(Node * root){
     if(root==NULL){
            return 0;
        }
        int lh=countNode(root->left);
        int rh=countNode(root->right);
        return lh+rh+1;
}
//sum of Node
int sumOfNode(Node * root){
    if(root==NULL){
        return 0;
    }
    int lh=sumOfNode(root->left);
    int rh=sumOfNode(root->right);
    return lh+rh+root->data;
}
// kth level
void kthlevel(Node * root,int k){
    if(root==NULL){
        return ;
    }
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    int count=0;
    while(!q.empty()){
        Node * curr=q.front();
        q.pop();
        if(curr==NULL){
            if(q.empty()){
                break;
            }
            else{
                q.push(NULL);
                count++;

            }
        }
        else{
            if(count==k){
                cout<<curr->data<<endl;
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
    BainryTree BB;
    BB.root=BB.buildTree();
   int hight= BB.Hight(BB.root);
   int count=BB.countNode(BB.root);
   int sum=BB.sumOfNode(BB.root);
   BB.kthlevel(BB.root,3);
   cout<<count<<endl;
   cout<<hight<<endl;
   cout<<sum<<endl;
   

   
   

    return 0;
}