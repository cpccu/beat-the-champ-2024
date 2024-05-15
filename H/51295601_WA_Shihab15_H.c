#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Check if n is odd, as it's not possible to tile the field if n is odd
    if (n % 2 == 1) {
        printf("-1\n");
        return 0;
    }

    // Print the tiling
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < n; j++) {
            // Use alternating colors for dominoes
            if ((i + j) % 2 == 0) {
                printf("a");
            } else {
                printf("b");
            }
        }
        printf("\n");
    }

    return 0;
}
