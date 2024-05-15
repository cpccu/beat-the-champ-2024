#include<bits/stdc++.h>
using namespace std;

long long reflection(long long n) {
    long long result = 0;
    long long place = 1;
    while (n > 0) {
        int digit = n % 10;
        result += (9 - digit) * place;
        place *= 10;
        n /= 10;
    }
    return result;
}

long long calculate_weight(long long n) {
    return n * reflection(n);
}

long long max_weight_in_range(long long l, long long r) {
    long long max_weight = 0;
    for (long long n = l; n <= r; ++n) {
        long long weight = calculate_weight(n);
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
