#include <stdio.h>
int main() {
    int A, B, C;
 
    scanf("%d %d %d", &A, &B, &C);
 
    if (A + B + C == 17 && A >=1 && B <= 7 && C <= 10) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
