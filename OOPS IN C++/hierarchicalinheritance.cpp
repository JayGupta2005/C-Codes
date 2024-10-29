#include<iostream>
using namespace std;
class a{
    public:
    void display1(){
        cout<<"In A class"<<endl;
    }
};
class b:public a{
    public:
    void display2(){
        cout<<"In B class"<<endl;
    }
};
class c:public a{
    public:
    void display3(){
        cout<<"In  C class"<<endl;
    }
};
int main(){
    b aa;
    c bb;
    aa.display1();
    aa.display2();
    bb.display1();
    bb.display3();
}