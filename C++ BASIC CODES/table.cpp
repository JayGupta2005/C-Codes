#include <iostream>
using namespace std;
int main()
{
    int n, table;
    cout << "Enter Number" << endl;
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        table = n * i;
        cout << "\n" << table;
    }
    return 0;
}