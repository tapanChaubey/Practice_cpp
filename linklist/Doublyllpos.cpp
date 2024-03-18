#include<iostream>
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
    void insert(int v,int k){
        node * t=new node(v);
        node * ter=head;
        
      int count=1;
        while(count<k-1){
            ter=ter->next;
        }
        t->next=ter->next;
        ter->next=t;
        t->privi=ter;
        t->next->privi=t;

    }
    void insertat(int v){
        node * t=new node(v);
        node * temp=head;
        if(head==NULL){
            head=t;
            tail=t;
            return ;
        }
        tail->next=t;
        t->privi=tail;
        tail=t;
        

    }
   
void display(){
    node * curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
   
};

int main(){

LinkedList ll;
int n;
cin>>n;
for(int i=0; i<n; i++){
   ll. insertat(i);
}
ll.display();
cout<<endl;
ll.insert(7,3);
ll.display();
return 0;
}