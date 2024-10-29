#include<iostream>
using namespace std;
class en{
    public:
    int a;
    int b;
    en(int x,int y){
        a=x;
        b=y;
    }
    int get(){
        return a+b;
    }
};
int main(){
    en obj (6,9);
    cout<<"Sum ="<<obj.get();
    return 0;
    

}