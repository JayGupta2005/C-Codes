#include <iostream>
using namespace std;
int main()
{
    int n, fact = 1;
    cout << "Enter Number" << endl;
    cin >> n;
    for (n; n >= 1; n--)
    {
        fact = fact * n;
    }
    cout << "\n"
         << fact;
    return 0;
}