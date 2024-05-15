#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }
    return 1;
}

// Function to find the winning move
int findWinningMove(int q) {
    // If q is prime, no winning move exists
    if (isPrime(q)) return -1;
    
    // Otherwise, find the smallest non-trivial divisor of q
    for (int i = 2; i <= sqrt(q); i++) {
        if (q % i == 0) {
            return i;
        }
    }
    return -1;  // Fallback if q is 1
}

int main() {
    int q;
    printf("Enter the initial number q: ");
    scanf("%d", &q);
    
    // Find the winning move
    int winningMove = findWinningMove(q);
    
    if (winningMove != -1) {
        printf("First player wins by choosing %d as the winning move.\n", winningMove);
    } else {
        printf("Second player wins.\n");
    }
    
    return 0;
}
