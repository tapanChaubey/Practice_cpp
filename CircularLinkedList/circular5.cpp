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
class CirculerLikedList{
    public:
    Node *head;
    CirculerLikedList(){
        head=NULL;
    }
 void insert(int val){
    Node * newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        newNode->next=head;
    }
    Node * temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=head;
    }

void deleteNodeEnd(){

    if(head==NULL){
        return;
    }
    Node * temp=head;
    while(temp->next->next!=head){
        temp=temp->next;
    }
    Node * t=temp->next;
    temp->next=head;
    delete t;


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
    cout<<endl;
    ll.deleteNodeEnd();
    ll.display();
    return 0;
}