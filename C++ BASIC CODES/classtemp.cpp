#include<iostream>
using namespace std;
template<typename x>
class demo{
    private:
    x num1;
    x num2;
    public:
    demo(x n1, x n2){
        num1=n1;
        num2=n2;
    }
    void check(){
        if (num1>num2){
            cout<<"Number 1 is greater"<<endl;
        }
        else{
            cout<<"Num 2 Is Greater"<<endl;
        }
    }
};
int main(){
    demo obj1(3,5);
    obj1.check();
    demo obj2(3.1,2.3);
    obj2.check();

    return 0;
}