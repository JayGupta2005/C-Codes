#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number";
    cin >> n;
    for (int i=2; i<n ; i++){
        if(n%i==0){
            cout<<"Not Prime";
            break;
        }
        else{
            cout<<"Prime Number";
            break;
        }
    }
    return 0;

}