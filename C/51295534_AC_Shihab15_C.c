#include <stdio.h>

int main() {
    int M, N;
    scanf("%d %d", &M, &N);

 
    int total_squares = M * N;

    int max_dominoes = total_squares / 2;

    printf("%d\n", max_dominoes);

    return 0;
}