#include<iostream>
using namespace std;
int main(){
    char ch;
    int a,b;
    cout<<"Enter First Number";
    cin>>a;
    cout<<"Enter Second Number";
    cin>>b;
    cout<<"Enter An Operator(+ - * /)";
    cin>>ch;
    switch(ch){
        case '+':
        int sum;
        sum=a+b;
        cout<<sum;
        break;
        case '-':
        int sub;
        sub=a-b;
        cout<<sub;
        break;
        case '*':
        int mul;
        mul=a*b;
        cout<<mul;
        break;
        
        case '/':
        int div;
        div=a/b;
        cout<<div;
        break;
        default:
        cout<<"Enter Valid Operator\nThank You!";
        break;

    }
}