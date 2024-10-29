#include<iostream>
using namespace std;
void add(int a, int b){
    cout<<"Sum="<<a+b<<endl;
}
void add(double a, double b){
    cout<<"Sum="<<a+b<<endl;
}
int main(){
    add(5,3);
    add(5.2 , 4.5);
    return 0;
}