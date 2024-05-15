#include <stdio.h>
#include <ctype.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        char s[n + 1];
        scanf("%s", s);

        // Check if the length is 5 and the first character is 'T'
        if (n == 5 && (s[0] == 'T' || s[0] == 't')) {
            // Check if all other characters are lowercase letters
            int valid = 1;
            for (int i = 1; i < n; i++) {
                if (!islower(s[i])) {
                    valid = 0;
                    break;
                }
            }
            if (valid) {
                printf("YES\n");
                continue;
            }
        }
        printf("NO\n");
    }

    return 0;
}