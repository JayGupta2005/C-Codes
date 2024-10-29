#include<iostream>
using namespace std;
int main (){
    char i,j;
    int p,q;
    cout<<"Enter Number Of Rows ";
    cin>>p;
    cout<<"Enter Number Of Column ";
    cin>>q;
    for(i=1;i<=p;i++){
        for(j=1;j<=q;j++){
            cout<<'*';
        }
        cout<<"\n";
    }
}