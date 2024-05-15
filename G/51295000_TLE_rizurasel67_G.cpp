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

int main() {
    long long l, r;
    cin >> l >> r;

    long long max_weight = 0;
    for (long long i = l; i <= r; ++i) {
        long long refl = reflection(i);
        long long weight = i * refl;
        max_weight = max(max_weight, weight);
    }

    cout << max_weight << endl;

    return 0;
}
