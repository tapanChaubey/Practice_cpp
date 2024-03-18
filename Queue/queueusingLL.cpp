#include<iostream>
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
class Queue{
    public:
    Node * head;
    int size=0;
    int count=0;
    Node * tail;
    Queue(int d){
        size=d;
        head=NULL;
        tail=NULL;
    }
    void enqueue(int d){
        Node * node=new Node(d);
        if(isFULL()){
            cout<<" Queue is full";
            return;
        }
        if(head==NULL){
            head=tail=node;
        
        }
        else{
            tail->next=node;
            tail=node;
            count++;
        }
    }
    int dequeue(){
        if(isEmpty()){
            cout<<"Queue is Empty";
            return -1;
        }
        else{
            Node * node=head;
            head=head->next;
            int d=node->data;
            delete node;
            return d;
            
        }
    }
int isEmpty(){
    return head==NULL;
}
int isFULL(){
    return count==size-1;
}
void display(){
    Node * temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
};
int main(){
    Queue ll(6);
    ///ll.dequeue();
   // cout<<endl;
    ll.enqueue(1);
    ll.enqueue(2);
    ll.enqueue(4);
    ll.enqueue(5);
    ll.enqueue(6);
    //ll.dequeue();
    //cout<<endl;
    ll.enqueue(7);
   // cout<<endl;
    ll.display();
    cout<<endl;
    ll.enqueue(8);
    cout<<endl;
    ll.dequeue();
    ll.display();

    return 0;
}