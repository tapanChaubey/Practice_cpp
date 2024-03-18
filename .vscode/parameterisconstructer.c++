#include <iostream>
using namespace std;
class hero{
    int helth;
    char level;
    public :
    hero(int helth,char level){
        this ->helth=helth;
        this ->level=level;
        cout<<this<<endl;
    }
    void get(){
        cout<<helth<<endl;
        cout<<level<<endl;
    }
    
};
int main() {
    // Write C++ code here
    
hero c1(10,'b');
c1.get();
cout<<&c1;

    return 0;
}