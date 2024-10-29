#include<iostream>
using namespace std;
class a{
    public:
    void display1(){
        cout<<"In A Class"<<endl;
    }
};
class b:public a{
    public:
    void display2(){
        cout<<"In B class"<<endl;
    }
};
class c:public b{
    public:
    void display3(){
        cout<<"In C class";
    }
};
int main(){
    c aa;
    aa.display1();
    aa.display2();
    aa.display3();
    return 0;

}