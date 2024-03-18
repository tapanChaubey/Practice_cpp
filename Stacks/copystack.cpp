#include<iostream>
#include<bits/stdc++.h>
using namespace std;
stack<int> copyStack(stack<int> &st){
    stack<int>temp;
    while( !st.empty()){
        temp.push(st.top());
        st.pop();
    }
    stack<int>result;
    while(!temp.empty()){
        result.push(temp.top());
        temp.pop();
    }
    return result;


}
using namespace std;
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    stack<int> res=copyStack(st);
    while(!res.empty()){
       cout<<res.top()<<" ";
       res.pop();
    }
    return 0;
}