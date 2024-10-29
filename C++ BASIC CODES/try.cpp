#include<iostream>
using namespace std;
class add{
    public:
    int a,b,c;
    void input(){
        cout<<"Enter First number"<<endl;
        cin>>a;
        cout<<"Enter Second Number"<<endl;
        cin>>b;
    }
    void cal(){
        c=a+b;
    }
   void out(){
        cout<<"sum is : "<<c;

    }

};
int main(){
    add a;
    a.input();
    a.cal();
    a.out();
    return 0;


}