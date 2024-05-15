#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> primeFactors(int n) {
    vector<int> factors;
    while (n % 2 == 0) {
        factors.push_back(2);
        n = n / 2;
    }
    for (int i = 3; i * i <= n; i = i + 2) {
        while (n % i == 0) {
            factors.push_back(i);
            n = n / i;
        }
    }
    if (n > 2) {
        factors.push_back(n);
    }
    return factors;
}
int main(){
    int n; cin >> n;
    vector<int> factors = primeFactors(n);

    if (factors.size() <= 1) {
        cout << 1 << '\n';
        cout << 0 << '\n';
        return 0;
    } else if (factors.size() == 2) {
        cout << 2 << '\n';
        return 0;
    }

    cout << 1 << '\n';
    cout << factors[0] * factors[1] << '\n';
    
    return 0;
}