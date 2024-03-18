#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node* next;
    int data;
    Node(int d){
        data=d;
        next=NULL;
    }

};
void insertAttail(Node * &tail,int n){
Node * temp=new Node(n);
tail->next=temp;
tail=temp;
}
void print(Node * &head){
    Node * temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertpos(Node * &head,int posi,int r){
    Node *temp=head;
    int count=1;
    while(count<posi){
        temp=temp->next;
        count++;
    }
    Node * element=new Node(r);
    element->next=temp->next;
    temp->next=element;

}

int main(){
    Node *p=new Node(12);
    Node *head=p;
    Node *tail=p;
    print(head);
    insertAttail(tail,2);
    print(head);
    insertAttail(tail,3);
    print(head);
    insertAttail(tail,4);
    print(head);
    insertAttail(tail,5);
    print(head);
    insertpos(head,3,6);
    print(head);






    return 0;
}
