#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        data=d;
        next=NULL;
    }

};
void insert(Node* &tail,int r){
    Node * temp=new Node(r);
    tail->next=temp;
    tail=temp;
}
void print(Node* &head){
    Node * tamp=head;
    while(tamp!=NULL){
        cout<<tamp->data<<" ";
        tamp=tamp->next;

    }
    cout<<endl;
    
}

int main(){

Node *p=new Node(14);

    Node *head=p;
    Node *tail=p;
    print(head);
    insert(tail,12);
    print(head);



}