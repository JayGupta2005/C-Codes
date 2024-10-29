#include<iostream>
using namespace std;
template <typename x>
class demo{
    private:
    x num1 ,num2;
    public:
    demo(x n1,x n2){
        num1=n1;
        num2=n2;
    }
    void check(){
        if(num1>num2){
            cout<<"NUM1 is greater";
        }
        else{
            cout<<"NUM 2 is greater";
        }
    }

};
int main(){
    demo obj1(4,5);
    obj1.check();
    return 0;

}