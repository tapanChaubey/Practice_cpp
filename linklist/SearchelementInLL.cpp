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
void insert(Node * &head,int r){
    Node * temp=new Node(r);
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

bool Search(Node * &head,int key ){
    Node * temp=head;
   while(temp!=NULL){
      if(temp->data==key){
            return 1;
        }
        temp=temp->next;
     }
    return 0;


}

int main(){

Node * p=new Node(1);
Node *head=p;
int n;
cin>>n;
int key;
cin>>key;
for(int i=1; i<=n; i++){
    int x;
    cin>>x;
    insert(head,x);
}
print(head);
cout<<endl;
cout<<Search(head,key);


return 0;
}