#include <stdio.h>
#include <math.h>

int isTriangular(int n) {

    int discriminant = 1 + 8 * n;

    int sqrt_discriminant = sqrt(discriminant);
    return sqrt_discriminant * sqrt_discriminant == discriminant;
}

int main() {
    int n;

    scanf("%d", &n);
  
    if (isTriangular(n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
