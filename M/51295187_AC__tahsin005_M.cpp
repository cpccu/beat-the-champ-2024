#include <bits/stdc++.h>
using namespace std;
int main () {
    int tt; cin >> tt; while (tt--) {
        int n; cin >> n;
        string s; cin >> s;
        string a = "Timur";
        sort (s.begin(), s.end());
        sort (a.begin(), a.end());
        if (a == s) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}