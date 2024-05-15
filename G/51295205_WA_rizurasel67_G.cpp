#include <bits/stdc++.h>
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

long long calculateWeight(long long n) {
    return n * reflection(n);
}

vector<long long> generateCandidates(long long l, long long r) {
    vector<long long> candidates;
    

    candidates.push_back(l);
    candidates.push_back(r);
    
    
    for (int i = 1; i <= 10; ++i) {
        if (l + i <= r) candidates.push_back(l + i);
        if (r - i >= l) candidates.push_back(r - i);
    }
    
    
    long long magnitude = 1;
    while (magnitude <= r) {
        if (magnitude - 1 >= l && magnitude - 1 <= r) {
            candidates.push_back(magnitude - 1);
        }
        magnitude *= 10;
    }
    
    return candidates;
}

int main() {
    long long l, r;
    cin >> l >> r;

    vector<long long> candidates = generateCandidates(l, r);
    
    long long max_weight = 0;
    for (long long n : candidates) {
        max_weight = max(max_weight, calculateWeight(n));
    }

    cout << max_weight << endl;

    return 0;
}
