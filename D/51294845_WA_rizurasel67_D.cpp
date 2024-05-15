#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> a(N);
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }

    long long total_clicks = 0;
    long long cumulative_product = 1;

    for (int i = 0; i < N; ++i) {
        cumulative_product *= a[i];
        total_clicks += cumulative_product;
    }

    cout << total_clicks << endl;

    return 0;
}
