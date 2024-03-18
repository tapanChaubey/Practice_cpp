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
    int Hight(Node * root){
        if(root==NULL){
            return 0;
        }
        int lh=Hight(root->left);
        int rh=Hight(root->right);
        return max(lh,rh)+1;
    }
    int Daimeter(Node * root){
        if(root==NULL){
            return 0;
        }
        int ldaimeter=Daimeter(root->left);
        int lh=Hight(root->left);
        int rdaimeter=Daimeter(root->right);
        int rh=Hight(root->right);
        int selfH=lh+rh+1;
        return max(selfH,max(ldaimeter,rdaimeter));
    }


};
int main(){
    Bainry bt;
    bt.root=bt.built();
   cout<<bt.Daimeter(bt.root)<<endl;
   cout<<bt.Hight(bt.root)<<endl;



    return 0;
}