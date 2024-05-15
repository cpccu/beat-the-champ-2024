#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long total_clicks = 0;
    long long cumulative_product = 1;

    for (int i = 0; i < n; ++i) {
        cumulative_product *= a[i];
        total_clicks += cumulative_product;
    }

    cout << total_clicks << endl;

    return 0;
}
