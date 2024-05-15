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

    // Check if q is even
    if (q % 2 == 0) {
        printf("1\n2\n");
    }
    // Check if q is odd and greater than 1
    else if (q > 1) {
        printf("1\n%lld\n", q);
    }
    // Check if q is 1
    else {
        printf("2\n");
    }

    return 0;
}
