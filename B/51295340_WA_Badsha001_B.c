#include <stdio.h>
#include <math.h>
#include <stdbool.h>


bool isTriangularNumber(int x) {

    int discriminant = 1 + 8 * x;
    int sqrtDiscriminant = (int)sqrt(discriminant);
    if (sqrtDiscriminant * sqrtDiscriminant != discriminant) {
        return false;
    }
    int n = (-1 + sqrtDiscriminant) / 2;
    return n * (n + 1) / 2 == x;
}

int main() {
    int x;

    scanf("%d", &x);

    if (isTriangularNumber(x)) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}
