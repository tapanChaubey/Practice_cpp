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
void insert(Node * &head,int n ){
    Node * temp=new Node(n);
    Node * curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    } 
    curr->next=temp;

}
void print(Node * &head){
Node * temp=head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}

}

int main(){
    Node *p=new Node(1);
    Node *head=p;
    Node *tail=p;
    int n;
    cin>>n; 
    for(int i=1; i<=n; i++){
        int x;
        cin>>x;
        insert(head,x);
    }
    print(head->next);


     return 0;
}