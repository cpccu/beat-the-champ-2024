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

    int maxVariants = 0;
    int clicks = 0;
    for (int i = 0; i < n; ++i) {
        maxVariants = max(maxVariants, a[i]);
        clicks += maxVariants;
    }

    cout << clicks << endl;

    return 0;
}
