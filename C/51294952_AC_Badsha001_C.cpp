#include <iostream>

int main() {
    int M, N;
    std::cin >> M >> N;

    int max_dominoes = (M * N) / 2;

    std::cout << max_dominoes << std::endl;

    return 0;
}
