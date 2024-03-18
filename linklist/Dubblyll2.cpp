#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node * next;
    node * privi;
    node(int d){
        data=d;
        next=NULL;
        privi=NULL;

    }
};
class DubblyLinkenlist{
    public:
    node * head;
    node * tail;
    DubblyLinkenlist(){
        head=NULL;
        tail=NULL;
    }
  void  insert(int val){
    node * newnode=new node(val);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next=head;
    head->privi=newnode;
    head=newnode;
  }
  void display(){
    node * temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
  }

};
int main(){
DubblyLinkenlist ll;
int n;
cin>>n;
for(int i=1; i<=n; i++){
   ll.insert(i);
}
ll.display();
return 0;
}