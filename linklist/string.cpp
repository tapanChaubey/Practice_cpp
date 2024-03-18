#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int k;
    cin>>k;
    int count=0;
    string str="101001";
    int max=0,r;
    for(int i=0; i<str.size(); i++){
        if(str[i]=='1'){
            count++;
            if(max<count){
                max=count;
                r=i;
            }
        }
        else{
            count=0;
        }
    }
    //
    cout<<r<<endl;
   for(int i=r+1; i<str.size(); i++){
      if(k>=0){
          if(str[i]=='0'){
              str[i]='1';
              k--;
          }
          
      } 
   }
   ///
   int maxi=0,count1=0;
   for(int i=0; i<str.size(); i++){
        if(str[i]=='1'){
            count1++;
            if(maxi<count1){
                maxi=count1;
                r=i;
            }
        }
        else{
            count=0;
        }
    }
    cout<<r<<endl;
    cout<<maxi<<endl;
    cout<<str;
   
    
    

    return 0;
}