#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enetr A:"<<endl;
    cin>>a;
    cout<<"Enetr B:"<<endl;
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After Swap: A and B are:"<<endl<<a<<endl<<b;
} 