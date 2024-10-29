#include <iostream>
using namespace std;

int main()
{
    int n = 20;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << " notPrime";
            break;
        }
        else
        {
            cout << "prime";
            break;
        }
    }

    return 0;
}