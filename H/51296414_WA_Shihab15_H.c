#include <stdio.h>


int countTilings(int n) {
    // Base cases
    if (n <= 1) return 1;

    int dp[n+1];
    dp[0] = dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = 2 * dp[i-1] + 2 * dp[i-2];
    }

    return dp[n];
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    int tilings = countTilings(n);
    printf("Number of tilings for a 4 x %d field: %d\n", n, tilings);

    return 0;
}
