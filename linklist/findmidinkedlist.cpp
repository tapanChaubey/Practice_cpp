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
class linkedlist{
    public:
    Node* head;
    Node *tail;
    linkedlist(){
        head=NULL;
        tail=NULL;
    }
    
         void insert(int v) {
       Node* node* newnode = new node(v);
        if (head == NULL) {
            head = newnode;
            tail = newnode;
            return;
        }
        node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
        tail = newnode;
    }
    
    void printNode(Node * head){
    Node * curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
cout<<endl;
    }
    void findmid(Node * head){
        Node * slow=head;
        Node * fast=head;
        int count=0;
        Node * curr1=head;
        while(curr1!=NULL){
            curr1=curr1->next;
            count++;
        }
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        if(count%2!=0){
            cout<<slow->data<<"-";
        }
        else{
            cout<<slow->next->data<<"-";
        }


    }
};
int main(){
    linkedlist ll;
    int n; 
    cin>>n;
    for(int i=1; i<=n; i++){
     ll.insert(ll.head,i);
    }
   ll.printNode(ll.head);
   ll.findmid(ll.head);
    return 0;
}