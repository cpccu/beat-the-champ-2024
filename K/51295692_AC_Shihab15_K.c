#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Array to store the years required to rise from rank i to rank i+1
    int years[n - 1];
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &years[i]);
    }

    int a, b;
    scanf("%d %d", &a, &b);

    // Calculate the total number of years needed to rise from rank a to rank b
    int total_years = 0;
    for (int i = a; i < b; i++) {
        total_years += years[i - 1];
    }

    printf("%d\n", total_years);

    return 0;
}
