#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    long long total_clicks = 0;
    long long product = 1;

    for (int i = 0; i < n; i++) {
        total_clicks += product * a[i];
        product *= a[i];
    }

    printf("%lld\n", total_clicks);

    return 0;
}
