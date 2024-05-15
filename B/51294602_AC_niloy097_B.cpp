#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    string ans = "NO";
    for (int i = 1; i <= n; i++)
    {
        if (i * (i + 1) / 2 == n)
        {
            ans = "YES";
            break;
        }
    }
    cout << ans << endl;
}