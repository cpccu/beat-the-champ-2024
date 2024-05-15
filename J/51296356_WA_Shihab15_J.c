#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int is_prime(long long n) {
    if (n <= 1) return 0;
    if (n == 2 || n == 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;

    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }

    return 1;
}

// Function to find the smallest prime divisor of a number
long long smallest_prime_divisor(long long n) {
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return i;
    }
    return n;
}

int main() {
    long long q;
    scanf("%lld", &q);

    // Check if q is prime
    if (is_prime(q)) {
        printf("1\n0\n"); // First player wins, no possible moves
    } else {
        // Find the smallest prime divisor
        long long p = smallest_prime_divisor(q);
        printf("1\n%lld\n", p); // First player wins, first move is p
    }

    return 0;
}
