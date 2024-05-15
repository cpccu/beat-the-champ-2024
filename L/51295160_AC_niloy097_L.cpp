#include <bits/stdc++.h>
using namespace std;
int t, n;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
            for (int j = n; j >= 1; j--)
                if (j != i)
                    cout << j << " ";
            cout << endl;
        }
    }
}