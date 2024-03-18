#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node * privi;
    node * next;
    node(int d){
        data=d;
        privi=NULL;
        next=NULL;
    }
};
class LinkedList{
    public:
    node * head;
    node * tail;
    LinkedList(){
        head=NULL;
        tail=NULL;
    }




    
};
int main(){
    node * p=new node(2);
    LinkedList ll;
    ll.head=p;
    ll.tail=p;
    cout<<"->"<<ll.head->data<<" "<<ll.tail->data;

    return 0; 
}