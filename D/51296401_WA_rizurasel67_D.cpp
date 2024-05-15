#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int clicks = 0;
    for (int i = 0; i < n - 1; ++i) {
        clicks += max(a[i], 1); 
    }
    clicks += a[n - 1];  

    cout << clicks << endl;

    return 0;
}
