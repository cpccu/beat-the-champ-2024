#include <iostream>
#include <string>
#include <algorithm>

// Function to calculate the reflection ψ(n)
long long int  reflection(long long int  n) {
    std::string str = std::to_string(n);
    for (char &ch : str) {
        ch = '9' - ch + '0';
    }
    return std::stoi(str);
}

int main() {
   long long int  l, r;
    std::cin >> l >> r;

    long long int  max_weight = 0;

    for (int n = l; n <= r; ++n) {
        long long int  refl = reflection(n);
        long long int  weight = n * refl;
        if (weight > max_weight) {
            max_weight = weight;
        }
    }

    std::cout << max_weight << std::endl;

    return 0;
}
