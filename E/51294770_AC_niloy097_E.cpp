#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int a[s.size()], t = 1;
    for (int i = 0; i < s.size(); i++)
        a[i] = s[i] - '0';
    for (int i = 1; i < s.size(); i++)
    {
        if (a[i] == a[i - 1])
        {
            t++;
        }
        else
        {
            t = 1;
        }
        if (t > 6)
        {
            cout << "YES";
            t = 500;
            break;
        }
    }
    if (t != 500)
        cout << "NO";
    return 0;
}