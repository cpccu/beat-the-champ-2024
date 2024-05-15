#include <bits/stdc++.h>
#define f(i, a, b) for (int i = a; i <= (int)b; i++)
#define pb push_back
#define mp make_pair
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a;
    f(i, 0, n - 1)
    {
        int num;
        cin >> num;
        a.pb(mp(num, i + 1));
    }
    sort(a.begin(), a.end());
    cout << ceil(n / 2.0) << "\n";
    f(i, 0, n - 1)
    {
        cout << a[i].second << " ";
        i++;
    }
    cout << "\n";
    cout << floor(n / 2.0) << "\n";
    f(i, 1, n - 1)
    {
        cout << a[i].second << " ";
        i++;
    }
    cout << "\n";
    return 0;
}