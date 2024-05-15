#include<bits/stdc++.h>
using namespace std;

bool isTriangular(int n) {

    int discriminant = 1 + 8 * n;
    
    
    int sqrt_discriminant = static_cast<int>(sqrt(discriminant));
    if (sqrt_discriminant * sqrt_discriminant != discriminant) {
        return false;
    }
    

    int k = (-1 + sqrt_discriminant) / 2;
    
    if (k * (k + 1) / 2 == n) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n;
    cin >> n;

    if (isTriangular(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
