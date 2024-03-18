#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int d){
        data=d;
        next=NULL;
    }
};
class Linkedlist{
    public:
    node *head;
    Linkedlist(){
       head=NULL;
    }
    
void insert(int v){
    node * newnode=new node(v);
    if(head==NULL){
        head=newnode;
        return;
    }
    node * temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode; 
}
void display(){
    node * curr=head;
    while(curr!=NULL){
        cout<<"->"<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<"->"<<"NULL";
    cout<<endl;

}



};



int main(){
    Linkedlist ll;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
       // int x;
       // cin>>x;
        ll.insert(i);
       //ll.display();
    
    }
    ll.display();


return 0;
}