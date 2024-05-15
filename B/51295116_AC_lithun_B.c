#include <stdio.h>
#include <stdbool.h>

bool isTriangularNumber(int n) {
    int k = 1;
    int triangularNumber = 1;

    while (triangularNumber <= n) {
        if (triangularNumber == n) {
            return true;
        }
        k++;
        triangularNumber = k * (k + 1) / 2;
    }

    return false;
}

int main() {
    int n;
    scanf("%d", &n);

    if (isTriangularNumber(n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}