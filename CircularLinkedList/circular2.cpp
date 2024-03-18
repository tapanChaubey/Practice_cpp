#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node(int d){
        data=d;
    }
};
class CirculerLikedList{
    public:
    Node * head;
    CirculerLikedList(){
        head=NULL;
    }
    void insert(int val){
        Node * t=new Node(val);
        if(head==NULL){
            head=t;
            t->next=head;
            return;
        }
        Node * tail=head;
        while(tail->next!=head){
            tail=tail->next;
        }
        tail->next=t;
        t->next=head;
    }
    void display(){
        Node * temp=head;
        do{
            cout<<temp->data<<" ";
            temp=temp->next;
        }while(temp!=head);
    }
};
int main(){
    CirculerLikedList ll;
    int n;
    cin>>n; 
    for(int i=1; i<=n; i++){
        ll.insert(i);
    }
    ll.display();
    return 0;
}