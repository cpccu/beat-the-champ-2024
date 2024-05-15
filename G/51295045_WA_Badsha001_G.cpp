#include <iostream>
#include <string>
#include <algorithm>

int reflection(int n) {
    std::string str = std::to_string(n);
    for (char &ch : str) {
        ch = '9' - ch + '0';
    }
    return std::stoi(str);
}

int main() {
    int l, r;
    std::cin >> l >> r;

    int max_weight = 0;

    for (int n = l; n <= r; ++n) {
        int refl = reflection(n);
        int weight = n * refl;
        if (weight > max_weight) {
            max_weight = weight;
        }
    }

    std::cout << max_weight << std::endl;

    return 0;
}
