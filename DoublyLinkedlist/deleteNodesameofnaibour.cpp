#include<iostream>
using namespace std;
class Node{
    public:
    Node * next;
    Node * prev;
    int data;
    Node(int d){
        data=d;
        next=NULL;
        prev=NULL;

    }
};
class DoublyLinked{
    public:
    Node *head;
    Node * tail;
    DoublyLinked(){
        head=NULL;
        tail=NULL;
    }
    void insert(int val){
        Node * node=new Node(val);
        if(head==NULL){
            head=tail=node;
            return;
        }
        tail->next=node;
        node->prev=tail;
        tail=node;
    }
   void deleteneighbour(){
    Node * curr=head->next;
    while(curr!=NULL && curr->next!=NULL){
        if(curr->prev->data==curr->next->data){
            Node * temp=curr;
            curr->prev->next=curr->next;
            curr->next->prev=curr->prev;
           curr=curr->next;
            delete temp;
        }
        
        curr=curr->next;
        
    }

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
        ll.insert(x);
    }
    ll.display();
    cout<<endl;
    ll.deleteneighbour();
    ll.display();




    return 0;
}