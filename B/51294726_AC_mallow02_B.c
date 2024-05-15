#include <stdio.h>

int main() {
    int n, k = 1;
    int triangular_number = 0;

    scanf("%d", &n);

    while (triangular_number < n) {
        triangular_number = k * (k + 1) / 2;
        if (triangular_number == n) {
            printf("YES\n");
            return 0;
        }
        k++;
    }

    printf("NO\n");
    return 0;
}