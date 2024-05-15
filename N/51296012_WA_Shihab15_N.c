#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        char s[n + 1];
        scanf("%s", s);

        // Check if the string matches the pattern of Timur's name
        if (n == 5 && s[0] == 'T' && islower(s[1]) && islower(s[2]) && islower(s[3]) && s[4] == 'R') {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
