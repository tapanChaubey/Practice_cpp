#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int d){
        data =d;
        next=NULL;
    }
};

void insertAthead(Node * &tail,int n){
    Node *temp=new Node(n);
    tail->next=temp;
    tail=temp;

}
void insert(Node * &head,int pos,int r){
    Node * temp=head;
    
    int cnt=1;
    while(cnt<pos-2){
        temp=temp->next;
        cnt++;
    }
    Node * positionTo=new Node(r);
    positionTo->next=temp->next;
    temp->next=positionTo;

}

void print(Node * &head){
    Node * temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}




int main(){

Node *p=new Node(19);
Node *head=p;
Node *tail=p;
print(head);
insertAthead(tail,20);
print(head);
insert(head,2,13);
print(head);
cout<<"head:"<<head->data<<endl;
cout<<"tail:"<<tail->data<<endl;



    return 0;
}
