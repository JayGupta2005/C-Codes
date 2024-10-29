#include<iostream>
using namespace std;
class a{
    public:
    void display(){
        cout<<"You are in A class"<<endl;
    }
};
class b:public a{
    public:
    void print(){
        cout<<"Now you are in B class";
    }
};
int main(){
    b aa;
    aa.display();
    aa.print();
    return 0;

}