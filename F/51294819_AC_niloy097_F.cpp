#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll r, b, g;
	cin >> r >> g >> b;
	ll ans = 29;
	for (int i = 0; i < 100001; i++)
	{
 
		if (i % 3 == 0 && r > 0)
			r -= 2;
		if (i % 3 == 1 && g > 0)
			g -= 2;
		if (i % 3 == 2 && b > 0)
			b -= 2;
		ans++;
		if (r <= 0 && g <= 0 && b <= 0)
			break;
	}
	cout << ans << endl;
    return 0;
}