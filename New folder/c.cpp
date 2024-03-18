#include<bits/stdc++.h>
using namespace std;
class Hash{
    public:
    int *arr;
    int size;
    Hash(int s){
        size=s;
        arr=new int[size];
        for(int i=0; i<size; i++){
            arr[i]=0;
        }

    }
    void insert(){
        int data;
        cin>>data;
        arr[data%size]=data;
    }
    void delet(int d){
        arr[d%size]=0;
    }
    int  serch(int d){
        if(arr[d%size]>0){
            return 1;
        }
        else{
            return 0;
        }

    }
    void print(){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
    }
};
int  main(){
    Hash ob(8);
    ob.insert();
    ob.delet(23);
    ob.serch(45);
   ob.print();


    


    return 0;

}
