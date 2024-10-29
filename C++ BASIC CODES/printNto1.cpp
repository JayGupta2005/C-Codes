#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout << "Enter Number" << endl;
    cin>>n;
    // for (i=n;i>=1;i--){
    //     cout<<"\n"<<i;
    // }
    i=n;
    while(i>=1){
        cout<<"\n"<<i;
        i--;
    }
    return 0;
}
