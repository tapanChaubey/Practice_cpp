#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    cin.ignore();
    while(n>=0){
         string str;
        getline(cin,str);
        cout<<str<<" ";
        n--;
    }

    return 0;
}