#include <iostream>

using namespace std;


int reflection(int n) {
    int reflected = 0;
    while (n > 0) {
        int digit = n % 10;
        reflected = reflected * 10 + (9 - digit);
        n /= 10;
    }
    return reflected;
}


int weight(int n) {
    return n * reflection(n);
}

int maxWeightInRange(int l, int r) {
    int maxWeight = 0;
    for (int i = l; i <= r; ++i) {
        int w = weight(i);
        if (w > maxWeight) {
            maxWeight = w;
        }
    }
    return maxWeight;
}

int main() {
    int l, r;
    
    cin >> l >> r;

    int maxWeight = maxWeightInRange(l, r);
    cout  << maxWeight << endl;

    return 0;
}
