#include<iostream>
using namespace std;
class a{
    public:
    void display1(){
        cout<<"Class A"<<endl;
    }
};
class b{
    public:
    void display2(){
        cout<<"Class B"<<endl;
    }
};
class c: public a,public b{
    public:
    void display3(){
        cout<<"Welcome to"<<endl;
    }
};
int main(){
    c aa;
    aa.display3();
    aa.display1();
    aa.display2();
    return 0;
}