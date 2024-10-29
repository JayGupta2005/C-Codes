#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number:"<<endl;
    cin>>n;
    int sum;
    int originaln=n;
    while(n>0){
        int lastdigit=n%10;
        sum=sum+pow(lastdigit,3);
        n=n/10;

    }
    if(sum==originaln){
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Not armstrong Number";
    }

}