#include<iostream>
using namespace std;
int prime(int a);
int main(){
    int a;
    prime(a);

}
int prime(int a){
    int n;
    cout<<"Enter Number:";
    cin>>n;
    for(int i=2;i<=n;i++){
        if(n%2==0){
            cout<<"Not Prime Number";
        }
        else{
            cout<<"Prime Number";
        }
        break;
    }
}