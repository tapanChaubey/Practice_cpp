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
void insertAttail(Node * &tail,int n){
  Node * temp=new Node (n);
  tail->next=temp;
  tail=temp;
}

void print(Node * &head){
   Node * temp=head;
   while(temp !=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}
cout<<endl;

}
void deletepos(int position,Node * &head){
    if(position==1){
        Node *temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node *privious=NULL;
        Node * Current=head;
        int count=1;
        while(count<position-1){
            privious=Current;
            Current=Current->next;
            count++;
        }
        privious=Current->next;
        Current->next=Current->next->next;
        delete privious;



    }
}
void printmidele(Node * &head){
    Node * temp=head;
    int cnt=0;
    while(temp!=NULL){
        temp=temp->next;
        cnt++;
    }
    int mid=cnt/2;
    int c=0;
    while(c<mid){
       head= head->next;
       c++;
    }
    cout<<head->data<<" ";
   
}

int main(){
    Node * p=new Node(14);
    Node *head=p;
    Node * tail=p;
   // print(head);
    insertAttail(tail,2);
   // print(head);
    insertAttail(tail,4);
   // print(head);
    insertAttail(tail,5);
   // print(head);
    insertAttail(tail,7);
    print(head);
    cout<<"head:"<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;
    //printmidele(head);
    cout<<endl;
   deletepos(3,head);
   print(head);
    








    return 0;
}
