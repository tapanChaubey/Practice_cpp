#include<iostream>
#include<stack>
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
class Stack{
    public:
    Node *head;
    int size;
    int count=0;
     Stack(int d){
        size=d;
        head=NULL;
    }
    void push(){
        cout<<"please enter the value";
    }
    void push(int val){
        if(isFull()){
            cout<<" stack is full";
            return;
        }
        Node *node=new Node(val);
        node->next=head;
        head=node;
        count++;
    }

int pop(){
    if(isEmpty()){
        cout<<" stack is empty";
        return head==NULL;
    }
    else{
        Node * node=head;
        int d=node->data;
        head=head->next;
        delete node;
        count--;
        return d;
    }
}
int isFull(){
    return count==size-1;

}
int isEmpty(){
    return head==NULL;
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
    Stack ll(6);
   // ll.pop();
    cout<<endl;
    ll.push(2);
    ll.push(3);
    ll.push(4);
    ll.push(5);
    ll.push(6);
    ll.push();
    //ll.push(9);
    cout<<endl;
    ll.display();
    cout<<endl;
    ll.pop();
    ll.pop();
    ll.display();






    return 0;
}