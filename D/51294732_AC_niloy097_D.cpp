#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin >> n;
    ll a;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        sum += (a - 1) * (i) + a;
    }

    cout << sum;

    return 0;
}