#include <iostream>
using namespace std;
class hero{
    int helth;
    char level;
    public :
   int getHelth(){
       helth=10;
        return helth;
    }
  char  getLeval(){
      level='p';
        return level;
    }
   int setHelth(int a){
       helth=a;
       return helth;
   }
   char setLeval(char ch){
       level=ch;
       return level;
   }
};
int main() {
    // Write C++ code here
hero c1;
cout<<c1.getHelth()<<endl;
cout<<c1.getLeval()<<endl;
cout<<c1.setHelth(4)<<endl;
cout<<c1.setLeval('a')<<endl;
//daynamically allocation;
hero *b=new hero;
cout<<(*b).setHelth(8)<<endl;
cout<<(*b).setLeval('b')<<endl;


    return 0;
}