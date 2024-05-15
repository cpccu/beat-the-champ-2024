#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        
        int operations = 0;
        int required = 1; // The value to be inserted next
        
        for (int i = 0; i < n; i++) {
            if (a[i] > i + 1) { // If the condition is not satisfied
                operations += (a[i] - (i + 1)); // Calculate the number of required operations
            } else if (a[i] < i + 1) { // If the condition is satisfied but not equal
                operations += (i + 1 - a[i]); // Calculate the number of required operations
            }
        }
        
        printf("%d\n", operations);
    }

    return 0;
}
