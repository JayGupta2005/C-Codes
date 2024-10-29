#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Number"<<endl;
    cin>>n;
    int array[n];
    for(int i=0;i<=n;i++){
        cin>>array[i];
    }
    int max;
    int min;
    for(int i=0;i<n;i++){
        if (array[i]>max){
            cout<<array[i];
        }
        if (array[i]<min){
            cout<<array[i];
        }
    }


    return 0;
}