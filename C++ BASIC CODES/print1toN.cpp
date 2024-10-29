#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "\n"
             << i;
    }
    // int i=1;
    // while(i<=n){
    //     cout<<"\n"<<i;
    //     i++;
    // }
    return 0;
}