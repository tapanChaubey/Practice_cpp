#include<iostream>
using namespace std;
int main(){
    int arr[5]={0,0,0,0,0};
    int n,m,s;
    int q;
    cin>>q;
    while(q--){
         cin>>n>>m>>s;
        arr[n]+=s;
        arr[m]-=s;
    }
    for(int i=1; i<5; i++){
        arr[i]+=arr[i-1];
    }
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    
   return 0;
}
