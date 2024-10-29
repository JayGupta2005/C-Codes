#include<iostream>
using namespace std;
class demo{
    private:
    int a;
    public:
    demo(int b){
        a=b;
    }
    void putdata(){
        cout<<"A="<<a; 
}
};
int main(){
    demo aa(5);
    aa.putdata();
    return 0;
}
