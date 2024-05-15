#include <stdio.h>

// Function to calculate the reflection of a number
int reflection(int n) {
    int result = 0;
    while (n > 0) {
        result = result * 10 + (9 - (n % 10));
        n /= 10;
    }
    return result;
}

// Function to calculate the weight of a number
long long weight(int n) {
    return (long long)n * reflection(n);
}

// Function to find the maximum weight in the range [l, r]
long long maxWeightInRange(int l, int r) {
    long long maxWeight = 0;
    for (int i = l; i <= r; i++) {
        long long w = weight(i);
        if (w > maxWeight) {
            maxWeight = w;
        }
    }
    return maxWeight;
}

int main() {
    int l, r;
    // Input bounds of the range
    printf("Enter the bounds of the range [l, r]: ");
    scanf("%d %d", &l, &r);
    
    long long maxWeight = maxWeightInRange(l, r);
    printf("Maximum weight in the range [%d, %d]: %lld\n", l, r, maxWeight);
    
    return 0;
}
