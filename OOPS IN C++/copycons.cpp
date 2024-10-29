#include<iostream>
using namespace std;
class demo{
    private:
    int a;
    public:
    demo(){
        a=5;
    }
    demo(demo & z){
        a=z.a;
    }
    void putdata(){
        cout<<a;
    }
};
int main(){
    demo aa;
    aa.putdata();
    return 0;
}