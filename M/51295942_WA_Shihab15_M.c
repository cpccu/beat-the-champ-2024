#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a string is a correct spelling of Timur's name
int isTimursName(char* s, int n) {
    // Check if the length of the string is exactly 5
    if (n != 5) {
        return 0;
    }

    // Check if the first character is an uppercase 'T'
    if (s[0] != 'T' && s[0] != 't') {
        return 0;
    }

    // Check if the rest of the characters are lowercase letters
    for (int i = 1; i < n; i++) {
        if (!islower(s[i])) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int t;
    scanf("%d", &t);

    // Iterate over each test case
    while (t--) {
        int n;
        scanf("%d", &n);

        // Read the string s
        char s[n + 1];
        scanf("%s", s);

        // Check if s is a correct spelling of Timur's name
        if (isTimursName(s, n)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}