#include<iostream>
using namespace std;
class demo{
    private:
    int a,b;
    public:
    demo(){  //constructor
        a=10;
        b=20;
    }
    void putdata(){
        cout<<endl<<a<<endl<<b;
    }
};
int main(){
    demo aa;
    aa.putdata();
    return 0;
}