#include <stdio.h>
#include <stdbool.h>

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


    if (q % 2 == 0) {
        printf("1\n2\n");
    }

    else if (q > 1) {
        printf("1\n%lld\n", q);
    }
    else {
        printf("2\n");
    }

    return 0;
}
