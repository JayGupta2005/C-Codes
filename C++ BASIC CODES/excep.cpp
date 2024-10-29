#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter Two Number";
    cin>>a>>b;
    try{
        if (b!=0){
            cout<<"Division is="<<a/b;
        }
        else{
            throw(b);
        }
    }
    catch(int b){
        cout<<"Not divisible by "<<b;
    }
    return 0;
}