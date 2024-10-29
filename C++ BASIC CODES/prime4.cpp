#include<iostream>
using namespace std;
int main (){
    int n,m;
    cout<<"Enter Number:";
    cin>>n>>m;
    for (int i=2;i<=m;i++){
        if(n%2!=0){
            cout<<i;
        }
        break;
    }
}