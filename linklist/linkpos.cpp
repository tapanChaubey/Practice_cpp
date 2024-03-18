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
void inserAT(Node * &tail,int n){
Node *temp=new Node(n);
tail->next=temp;
tail=temp;
}
void insertAtpos(Node *&head,int pos,int p){
    Node * temp=head;
    int count=1;
    while(count<pos-2){
        temp=temp->next;
        count++;
    }
    Node * nodeto=new Node(p);
    nodeto->next=temp->next;
    temp->next=nodeto;
}
void print(Node * &head){
Node *temp=head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}
cout<<endl;
}

int main(){

Node *p=new Node(14);
Node * head=p;
Node *tail=p;
print(head);
inserAT(tail,12);
print(head);
inserAT(tail,16);
print(head);
insertAtpos(head,3,21);
print(head);



    return 0;
}