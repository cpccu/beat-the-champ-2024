#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int operations = 0;

        for (int i = 0; i < n + operations; ++i) {
            if (i < a.size() && a[i] > i + 1) {
                a.insert(a.begin() + i, i + 1);
                ++operations;
            }
        }

        cout << operations << endl;
    }

    return 0;
}
