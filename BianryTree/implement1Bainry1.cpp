#include<iostream>
using namespace std;
class node{
    public:
    node *left;
    node *right;
    int data;
    node(int d){
        data=d;
        left=NULL;
        right=NULL;

    }
};
class BainryTree{
    public:
    node *root;
    BainryTree(){
        root=NULL;
    }
node * builttree(){
    int d;
    cin>>d;
  if(d==-1){
  return NULL;
  }
  node * n=new node(d);
  cout<<"insert in left of"<<d<<endl;
  n->left=builttree();
  cout<<"insert in right of"<<d<<endl;
  n->right=builttree();
  cout<<endl;
  cout<<n->data<<" ";
  

}

};


int main(){
    BainryTree BB; 
   cout<< BB.builttree();

    return 0;
}
