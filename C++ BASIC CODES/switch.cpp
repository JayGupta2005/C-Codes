#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter World Between A to D ";
    cin>>ch;
    switch (ch){
        case 'a':
        cout<<"Hello";
        break;
        case 'b':
        cout<<"Namaste";
        break;
        case 'c':
        cout<<"Ram Ram";
        break;
        case 'd':
        cout<<"Good Morning";
        break;
        default:
        cout<<"Put a valid number";
        break;

    }
}