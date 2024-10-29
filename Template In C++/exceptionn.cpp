#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter Two Number"<<endl;
    cin>>a>>b;
    c=a/b;
    try{
        if(b!=0){
            cout<<"Division"<< c;
        }
        else{
            throw(b);
        }
    }
    catch(int b){
        cout<<"Not divisible by"<<b;
    }
    return 0;
    
}