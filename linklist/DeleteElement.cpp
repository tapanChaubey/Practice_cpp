#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node * next;
    node(int d){
        data=d;
        next=NULL;
    }

};
void insert(node * &head,int r){
    node * temp=new node(r);
    node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;

}
void print(node * &head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
       temp= temp->next;
    }


}
void DeleteElement(node *head,int key){
    node * temp=head;

    while(temp->next->data!=key){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    todelete=NULL;
    delete todelete;

}


int main(){
int n;
cin>>n;
node * p=new node(1);
node * head=p;
int key;
cin>>key;
for(int i=1; i<=n; i++){
    int x;
    cin>>x;
    insert(head,x);
}
print(head->next);
cout<<endl;
DeleteElement(head,key);
cout<<endl;
print(head->next);


    return 0;
}