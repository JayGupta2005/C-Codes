#include<iostream>
using namespace std;
int fibu (int a);
int main(){
    int a;
    fibu(a);

}
int fibu (int a){
    cout<<"Enter Number"<<endl;
    cin>>a;
    int b=a-1;
    int n=a+b;
    cout<<"Fibunachi Is:"<<n;
    return n;
}
