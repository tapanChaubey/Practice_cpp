#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node * prev;
    Node(int d){
        data=d;
        next=NULL;
        prev=NULL;
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
    void insertion(int val){
       Node *temp=head;
    Node * newNode=new Node(val);
     
     if(head==NULL){
        tail=head=newNode;
        return;
    }
    
    while(temp!=NULL && temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->prev=temp;
    temp=newNode;
    
    }
    void insertkth(int d,int k){
        Node * temp=head;
        Node * node=new Node(d);
        // if(k==1){
        //     node->next=head;
        //     head->prev=node;
        //     head=node;
        //     return;
        // }
        int count=0;
        while(count<k-1){
            temp=temp->next;
            count++;
        }
        node->next=temp->next;
        temp->next=node;
        node->prev=temp;
        temp=node;
        return;
        

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
DoublyLinked ll;
int n;
cin>>n;
for(int i=1; i<=n; i++){
    int x;
    cin>>x; 
    ll.insertion(x);
}
ll.display();
cout<<endl;
ll.insertkth(10,3);
ll.display();

  return 0;
}