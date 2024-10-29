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
    if(a>b && a>c){
        cout<<"1st Is Greater";
        cout<<a;
    }
    else if (b>a && b>c){
        cout<<"2nd Is Greater";
        cout<<b;
    }
    else{
        cout<<"3rd Is Greater";
        cout<<c;
    }

    
    
}