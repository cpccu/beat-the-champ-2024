#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long total_clicks = 0;

    for (int i = 0; i < n; ++i) {
        long long ai;
        scanf("%lld", &ai);

        
        long long max_clicks = ai; 
        for (long long j = 2; j <= ai; ++j) {
            long long clicks_needed = j + (j - 1) * (ai - 1);
            if (clicks_needed > max_clicks) {
                max_clicks = clicks_needed;
            }
        }

    
        total_clicks += max_clicks;
    }

    printf("%lld\n", total_clicks);

    return 0;
}
