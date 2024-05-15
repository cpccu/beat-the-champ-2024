#include <iostream>
#include <string>

using namespace std;

bool isDangerous(string s) {
    int consecutiveZeros = 0;
    int consecutiveOnes = 0;
    
    for (char c : s) {
        if (c == '0') {
            consecutiveZeros++;
            consecutiveOnes = 0;
        } else {
            consecutiveOnes++;
            consecutiveZeros = 0;
        }
        
        if (consecutiveZeros >= 7 || consecutiveOnes >= 7) {
            return true;
        }
    }
    
    return false;
}

int main() {
    string situation;
    cin >> situation;

    if (isDangerous(situation)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
