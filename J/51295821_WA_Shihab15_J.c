#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(long long int n) {
    if (n <= 1) {
        return false;
    }
    for (long long int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    long long int q;
    scanf("%lld", &q);

    // Check if q is prime
    if (isPrime(q)) {
        printf("2\n");
    } else {
        // Find the smallest non-trivial divisor of q
        long long int first_move = 0;
        for (long long int i = 2; i * i <= q; i++) {
            if (q % i == 0) {
                first_move = i;
                break;
            }
        }
        printf("1\n%lld\n", first_move);
    }

    return 0;
}
