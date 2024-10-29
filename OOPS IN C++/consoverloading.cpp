#include<iostream>
using namespace std;
class demo{
    private:
    int a;
    public:
   demo(){
    a=10;
   }
   demo(int x){
    a=x;
   }
   void putdata(){
    cout<<"a="<<a<<endl;
   }
};
int main(){
    demo aa;
    demo bb(5);
    aa.putdata();
    bb.putdata();
    return 0;
}
