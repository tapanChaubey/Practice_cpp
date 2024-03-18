#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node * next;
    node(int d){
        data=d;
        next=NULL;
    }

};

class Linkedlist{
    public:
    node *head;
    node *tail;
    Linkedlist(){
       head=NULL;
       tail=NULL;
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
    tail=temp->next;

}
void display(){
    node * curr=head;
    while(curr!=NULL){
        cout<<"->"<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<"->"<<"NULL";
    cout<<endl;


    cout<<"tail->"<<tail->data;
    cout<<endl;

}

bool fun(node * &head){
node * slow=head;
node * fast=head;
while(fast && fast->next){
    slow=slow->next;
    fast=fast->next->next;
    if(fast==slow){
        cout<<fast->data<<endl; 
        return true;
    }
}
return false;
}
};
int main(){
    Linkedlist ll;
    int n;
    cin>>n;
   
    for(int i=1; i<=n; i++){
        ll.insert(i);
    }
    ll.display();
    ll.tail->next=ll.head->next->next;
    cout<<ll.fun(ll.head)<<endl;
     return 0;
}



 