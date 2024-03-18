#include <iostream>
using namespace std;
class abc{
    protected:
    int x;
    public:
    void input(){
        cin>>x;
    }
};
class d:public abc{
    int y;
    public:
    void get(){
        cin>>y;
    }
    void put(){
        cout<<x+y;
    }
};

int main() {
    d aa;
    aa.input();
    aa.get();
    aa.put();

    return 0;
}