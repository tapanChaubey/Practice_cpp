#include <iostream>
using namespace std;
class abc{
    int x;
    public:
    void input(){
        cin>>x;
    }
    int set(){
        return x;
    }
};
class c{
    protected :
    int z;
    public:
    void call(){
        cin>>z;
    }
};
class d:public abc,public c{
    int y;
    public:
   void get(){
        cin>>y;
   }
    void put(){
        cout<<set()+z+y;
    }
};

int main() {
    d aa;
    aa.input();
    aa.get();
    aa.call();
    aa.put();

    return 0;
}