#include <iostream>
using namespace std;

long long reflection(long long n) {
    long long result = 0;
    while (n > 0) {
        result = result * 10 + (9 - n % 10);
        n /= 10;
    }
    return result;
}

long long max_weight_in_range(long long l, long long r) {
    long long max_weight = 0;
    for (long long n = l; n <= r; ++n) {
        long long weight = n * reflection(n);
        max_weight = max(max_weight, weight);
    }
    return max_weight;
}

int main() {
    long long l, r;
    cin >> l >> r;
    long long max_weight = max_weight_in_range(l, r);
    cout << max_weight << endl;
    return 0;
}
