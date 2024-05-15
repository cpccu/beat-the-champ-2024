#include <stdio.h>

// Function to swap two integers
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to print an anti-Fibonacci permutation
void printPermutation(int n) {
    // Initialize an array with integers from 1 to n
    int permutation[n];
    for (int i = 0; i < n; i++) {
        permutation[i] = i + 1;
    }

    // Rearrange the elements to satisfy the anti-Fibonacci condition
    for (int i = 2; i < n; i++) {
        swap(&permutation[i - 1], &permutation[i]);
    }

    // Print the permutation
    for (int i = 0; i < n; i++) {
        printf("%d ", permutation[i]);
    }
    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);

    // Iterate over each test case
    while (t--) {
        int n;
        scanf("%d", &n);

        // Print n distinct anti-Fibonacci permutations
        for (int i = 0; i < n; i++) {
            printPermutation(n);
        }
    }

    return 0;
}
