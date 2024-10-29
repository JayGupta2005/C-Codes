#include<iostream>
using namespace std;
void add(int a, int b){
    cout<<"SUM="<<a+b<<endl;
}
void add(double a, double b){
    cout<<"SUM="<<a+b<<endl;
}
int main(){
    add(5,3);
    add(5.2,6.4);
    return 0;
}