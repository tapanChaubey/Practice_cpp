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
void insert(Node * &tail,int r){
    Node * temp=new Node(r);
    tail->next=temp;
    tail=temp;


}
void print(Node * &head){
    Node * temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
       temp= temp->next;
    }

}
Node * reverse(Node * &head){
    Node * forword;
    Node * Curr=head;
    Node * privi=NULL;
    while(Curr !=NULL){
            forword=Curr->next;
            Curr->next=privi;
            privi=Curr;
            Curr=forword;
    }
   // cout<<Curr->data<<" ";
return privi;
}



int main(){
    Node * p=new Node(10);
    Node * head=p;
    Node * tail=p;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        int x;
        cin>>x;
        insert(tail,x);
    }
    print(head);
    cout<<endl;
  Node* newhead=reverse(head);
    print(newhead);

    










    return 0;
}