#include<iostream>
using namespace std;
class add{
    public: int a,b,c;
    void input(){
        cout<<"Enter 2 Number"<<endl;
        cin>>a>>b;
    }
    void cal(){
        c=a+b;
    }
    void out(){
        cout<<"Sum Is :"<<c;
    }
};
int main(){
    add a;
    a.input();
    a.cal();
    a.out();
    return 0;
}