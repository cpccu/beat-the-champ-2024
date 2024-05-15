#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        
        char s[11];
        scanf("%s", s);
        
        
        int counts[4] = {0};
        
        
        for (int i = 0; i < t; i++) {
            if (tolower(s[i]) == 't') counts[0]++;
            if (tolower(s[i]) == 'i') counts[1]++;
            if (tolower(s[i]) == 'm') counts[2]++;
            if (tolower(s[i]) == 'u') counts[3]++;
            if (tolower(s[i]) == 'r') counts[4]++;
        }
        

        if (counts[0] == 1 && counts[1] == 1 && counts[2] == 1 && counts[3] == 1 && counts[4] == 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
