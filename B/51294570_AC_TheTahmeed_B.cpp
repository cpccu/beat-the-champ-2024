#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = sqrt(2 * n);
    if (x * (x + 1) / 2 == n)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}