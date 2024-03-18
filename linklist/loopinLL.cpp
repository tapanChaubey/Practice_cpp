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
void insert(Node* &tail,int r){
    Node * temp=new Node (r);
  tail->next=temp;
  tail=temp;

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

    Node *p=new Node(10);
    Node *head=p;
    Node *tail=p;
    // insert(tail,3);
    // print(head);
    // insert(tail,4);
    //  print(head);
     int size; cin>>size;
     for(int i=0;i<size;i++)
     {
        int x; cin>>x;
        insert(tail,x);
     }
     print(head->next);
   






    
    return 0;
}