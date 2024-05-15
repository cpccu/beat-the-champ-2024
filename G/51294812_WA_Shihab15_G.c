#include <stdio.h>

long long int reflection(long long int n) {
    long long int reflected = 0;
    while (n > 0) {
        int digit = n % 10;
        reflected = reflected * 10 + (9 - digit);
        n /= 10;
    }
    return reflected;
}

long long int weight(long long int n) {
    return n * reflection(n);
}

int main() {
    long long int l, r;
    

    scanf("%lld %lld", &l, &r);
    
    long long int max_weight = 0;
    for (long long int n = l; n <= r; n++) {
        long long int w = weight(n);
        if (w > max_weight) {
            max_weight = w;
        }
    }
    

    printf("%lld\n", max_weight);
    
    return 0;
}
