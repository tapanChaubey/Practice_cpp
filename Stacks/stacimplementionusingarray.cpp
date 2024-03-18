#include<iostream>
using namespace std;
class Stacks{
    int top;
    int size;
    int *arr;
    public:
    Stacks(int s){
        size=s;
        top=-1;
        arr = new int[size];
    }
    void push(int val){
        if(isfull()){
            cout<<"overflow";
            return;
        }
        top++;
        arr[top]=val;
    }
    int pop(){
        if(isEpmty()){
            cout<<"underflow";
            return -1;
        }
        int data=arr[top--];
        return data;
    }
    int isfull(){
        return top==size-1;
    }
    int isEpmty(){
        return top==-1;
    }
int gettop(){
    cout<<arr[top]<<" ";
}
void print(){
    for(int i=0; i<=top; i++){
        cout<<arr[i]<<" ";
    }
}
};
int main(){
    Stacks st(6);
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<endl;
     st.print();
     cout<<endl;

    st.gettop();
    st.push(4);
    st.push(5);
    st.gettop();
    ///cout<<endl;
    st.push(6);
    cout<<endl;
    st.push(8);
    cout<<endl;
    cout<<st.pop()<<endl;
    cout<<endl;
    cout<<st.pop()<<endl;
    st.print();






    return 0;
}