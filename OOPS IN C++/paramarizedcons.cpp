#include<iostream>
using namespace std;
class demo{
    private:
    int a,b;
    public:
    demo(int m,int n){
        a=m;
        b=n;
    }
    void putdata(){
        cout<<endl<<a<<endl<<b;
    }
};
int main(){
    demo aa(5,10);
    aa.putdata();
    return 0;
}