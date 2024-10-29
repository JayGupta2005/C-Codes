#include<iostream>
using namespace std;
int swap(int a,int b);
int main(){
    int a;
    cout<<"Enter A:"<<endl;
    cin>>a;
    int b;
    cout<<"Enter B:"<<endl;
    cin>>b;
    swap(a,b);
}
int swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    cout<<"After Swap: A and B are="<<endl<<a<<endl<<b;
    return 0;
}