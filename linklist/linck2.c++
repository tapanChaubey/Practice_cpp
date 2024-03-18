#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int d){
        data=d;
        next=NULL;
    }


};
void inserAtHead(Node * &tail,int n){
    Node * temp=new Node(n);
    tail->next=temp;
    tail=temp;

}
void print(Node *&head){
Node * temp=head;
while(temp!=NULL){
    cout<<temp->data<<" ";
  temp=temp->next;
}
cout<<endl;

}
int main(){

Node *p=new Node(10);
//cout<<p->data<<" "<<p->next;
Node *head=p;
Node* tail=p;
print(head);
inserAtHead(tail,15);
print(head);
inserAtHead(tail,14);
print(head);



    
    return 0;
}
