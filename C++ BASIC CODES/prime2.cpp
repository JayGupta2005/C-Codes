#include<iostream>
using namespace std;
int main (){
    int a;
    cout<<"Enter Number:";
    cin>>a;
    for (int i=2;i<a;i++){
        if(a%i==0){
            cout<<"Not Prime Number";
        }
        else { 
            cout<<"Prime Number";
        }
        break;
    }
}