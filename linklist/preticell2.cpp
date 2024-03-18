#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
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
void deletelement(Node * &head,int posi){
    if(posi==1){
        Node *temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node * privi=NULL;
        Node * Curr=head;
        int count=1;
        while(count<=posi-1){
            privi=Curr;
            Curr=Curr->next;
            count++;
        }
        privi->next=Curr->next;
        Curr->next=NULL;
    }
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
    deletelement(head,1);
    print(head);


    return 0;
}