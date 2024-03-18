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
    void insert(int n){
        Node * newNode=new Node(n);
        if(head==NULL){
            head=newNode;
            newNode->next=head;
            return;
        }
        Node * tail=head;
        while(tail->next!=head){
            tail=tail->next;
        }
        tail->next=newNode;
        newNode->next=head;
        head=newNode;
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