#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int m, n, c;
    cin >> m >> n>> c;
    
    int count5 = 0, count7 = 0;

    if (m == 5) count5++;
    if (n == 5) count5++;
    if (c == 5) count5++;
    if (m == 7) count7++;
    if (n == 7) count7++;
    if (c == 7) count7++;

    if (count5 == 2 && count7 == 1) 
    {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
