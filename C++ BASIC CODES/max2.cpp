#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter First Number";
    cin>>a;
    cout<<"Enter Second Number";
    cin>>b;
    cout<<"Enter Third Number";
    cin>>c;
    if (a>b){
        if(a>c){
            cout<<"A Is Greater";
        }
    }
    else if (b>a){
        if(b>c){
            cout<<"B Is Greater";
        }
    }
    else{
            cout<<"C Is Greater";
        }
    }
