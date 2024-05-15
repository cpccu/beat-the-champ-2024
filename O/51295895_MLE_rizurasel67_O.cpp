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
        int i = 0;

        while (i < a.size()) {
            if (a[i] > i + 1) {
                a.insert(a.begin() + i, i + 1);
                ++operations;
            }
            ++i;
        }

        cout << operations << endl;
    }

    return 0;
}
