#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long clicks = a[0]; // Clicks required for the first question

    for (int i = 1; i < n; ++i) {
        clicks = max(clicks + 1LL, (long long)a[i]); // Update clicks with maximum value
    }

    cout << clicks << endl;

    return 0;
}
