#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FOR(i, s, e) for (ll i = s; i <= e; i++)
#define vii vector<ll>
int main()
{
    int n; 
    cin >> n; 
    vector<ll> d(n + 1) ;
    FOR(i, 1, n-1) cin >> d[i];
    int a, b; 
    cin >> a >> b; 
    int ans = 0; 
    FOR(i, a, b-1) ans += d[i]; 
    cout << (int32_t) ans; 
    return 0;
}