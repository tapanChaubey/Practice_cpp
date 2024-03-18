#include<iostream>
using namespace  std;
class Node {
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
void insert(int val){
    Node * newnode=new Node(val);
    Node * temp=head;
    if(head==NULL){
        head=tail=newnode;
        return ;
    }
   
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
    
}
void display(){
    Node * temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
     
}

int  checkpeledrom(){
    while(head!=tail&& tail!=head->prev){
        if(head->data!=tail->data){
            return 0;
        }
        head=head->next;
        tail=tail->prev;
    }
    return 1;

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
    int r=ll.checkpeledrom();
    cout<<r;



    return 0;
}
