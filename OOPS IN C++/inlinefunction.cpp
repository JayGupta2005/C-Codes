#include<iostream>
using namespace std;
inline void sum(int a, int b){
    int sum=a+b;
    cout<<a+b;
}
int main(){
    cout<<"sum Is"<<sum(2,4);
    return 0;
}