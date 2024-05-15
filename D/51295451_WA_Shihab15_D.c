#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long int total_clicks = 0;

    // Input the number of answer variants for each question and sum them up
    for (int i = 0; i < n; i++) {
        int ai;
        scanf("%d", &ai);
        total_clicks += ai;
    }

    printf("%lld\n", total_clicks);

    return 0;
}
