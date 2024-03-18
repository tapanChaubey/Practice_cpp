#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node * prev;
    Node(int d){
        data=d;
        next=NULL;
        prev=NULL;
    }
};
 class Doublylinked{
   public:
   Node * head;
   Node * tail;
   Doublylinked(){
    head=NULL;
    tail=NULL;
   }
  void insertTail(int d){
   Node *temp=head;
    Node * newNode=new Node(d);
     
     if(head==NULL){
        tail=head=newNode;
        return;
    }
    
    while(temp!=NULL && temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->prev=temp;
    temp=newNode;
    
  } 
  void display(){
    Node * temp1=head;
    while(temp1!=NULL){
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    }
  }


};
int main(){

Doublylinked ll;
int n;
cin>>n; 
for(int i=0; i<n; i++){
    ll.insertTail(i);
}
ll.display();

    return 0;
}