#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"Enter A and B:"<<endl;
    cin>>a>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"After Swap: A and B are:"<<endl<<a<<endl<<b;
}