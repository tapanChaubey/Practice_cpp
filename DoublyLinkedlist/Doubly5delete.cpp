#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node * prev;
    Node(int d){
        data=d;
        prev=NULL;
        next=NULL;
    }
};
class DoublyLinked{
    public:
    Node * head;
    Node * tail;
    
    DoublyLinked(){
        head=NULL;
        tail=NULL;
    }
    void insert(int val){
        Node * newNode=new Node(val);
        Node * temp=head;
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return;
        }
        while(temp!=NULL && temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->prev=temp;
        temp=newNode;
    
    }
    void display(){
        Node * temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    void deletekth(int k){
    Node * curr=head;
    Node * curr1=head;
    int len=0;
    if(k==1){
        Node * temp=head;
        head=head->next;
        head->prev=NULL;
        delete temp;
        return;
        
    }
    while(curr1!=NULL){
        curr1=curr1->next;
        len++;

    }
     if(len<k){
         return ;
     }
    int count=1;

    if(head==NULL){
        return;
    }
    while(count<k){
        curr=curr->next;
        count++;
    }
     Node * temp=curr;
    curr->prev->next=curr->next;
    curr->next->prev=curr->prev;
    curr=curr->next;
    delete temp;

    


}


};

int  main(){
DoublyLinked ll;
int n,pos;
cin>>n>>pos; 
for(int i=1; i<=n; i++){
    ll.insert(i);
}
ll.display();
ll.deletekth(pos);
cout<<endl;
ll.display();

    return 0;
}