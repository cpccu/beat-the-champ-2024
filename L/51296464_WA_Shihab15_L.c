#include <stdio.h>

// Function to check if a number is present in the permutation
int isInPermutation(int *perm, int n, int num) {
    for (int i = 0; i < n; i++) {
        if (perm[i] == num) return 1;
    }
    return 0;
}

// Recursive function to generate anti-Fibonacci permutation
void generatePermutation(int *perm, int n, int index) {
    if (index == n) {
        // Print the permutation
        for (int i = 0; i < n; i++) {
            printf("%d\n", perm[i]);
        }
        return;
    }

    // Try each number not present in the previous two positions
    for (int i = 1; i <= n; i++) {
        if (!isInPermutation(perm, index, i) &&
            (index < 2 || (i + perm[index-1] != perm[index-2]))) {
            perm[index] = i;
            generatePermutation(perm, n, index + 1);
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);


if(t>=1 && t<=48){
    while (t--) {
        int n;
        scanf("%d", &n);

if(n>=3 && n<=50){
        int permutation[n];
        generatePermutation(permutation, n, 0);

        printf("\n"); // Separate test cases with a newline
}
    }
}

    return 0;
}
