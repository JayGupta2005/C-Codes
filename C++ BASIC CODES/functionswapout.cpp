#include<iostream>
using namespace std;
void swapout(int a,int b);
int main(){
    int a,b;
    cout<<"Enter A:"<<endl;
    cin>>a;
    cout<<"Enter B:"<<endl;
    cin>>b;
    swap(a,b);
}
int swap(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After Swapping: A and B are:"<<endl<<a<<endl<<b;
}
