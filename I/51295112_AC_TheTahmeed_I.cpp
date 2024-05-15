#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a.begin(), a.end());
    vector<int> team1, team2;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            team1.push_back(a[i].second);
        } else {
            team2.push_back(a[i].second);
        }
    }
    cout << team1.size() << endl;
    for (int i = 0; i < team1.size(); i++) {
        cout << team1[i] << " ";
    }
    cout << endl;
    cout << team2.size() << endl;
    for (int i = 0; i < team2.size(); i++) {
        cout << team2[i] << " ";
    }
    cout << endl;
    return 0;
}