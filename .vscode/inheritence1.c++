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
class d:public abc{
    int y;
    public:
    void get(){
        cin>>y;
    }
    void put(){
        cout<<set() + y;
    }
};

int main() {
    d aa;
    aa.input();
    aa.get();
    aa.put();

    return 0;
}