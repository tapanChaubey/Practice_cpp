#include<bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    string str;
    getline(cin,str);
    int count=0;
    for(int i=0; i<str.size()/2; i++){
       if(str[i]!=str[str.size()-1-i])
       count++;

    }
    if(str.size()!=0){
        cout<<count;
    }
    else{
        cout<<count+1;
    }
    

    return 0;
}