#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isValidSpelling(char s[]) {
    // Step 1: Check length
    if (strlen(s) != 5) {
        return 0;
    }
    
    // Step 2: Check first character
    if (s[0] != 'T' && s[0] != 't') {
        return 0;
    }
    
    // Step 3: Check counts of 'i', 'm', 'u', 'r'
    int count_i = 0, count_m = 0, count_u = 0, count_r = 0;
    for (int i = 1; i < 5; i++) {
        switch (tolower(s[i])) {
            case 'i':
                count_i++;
                break;
            case 'm':
                count_m++;
                break;
            case 'u':
                count_u++;
                break;
            case 'r':
                count_r++;
                break;
            default:
                return 0;  // Invalid character found
        }
    }
    
    if (count_i != 1 || count_m != 1 || count_u != 1 || count_r != 1) {
        return 0;
    }
    
    return 1;
}

int main() {
    char s[6];  // including null terminator
    
    // Input string
    printf("Enter the string: ");
    scanf("%s", s);
    
    // Check validity
    if (isValidSpelling(s)) {
        printf("Valid spelling of Timur.\n");
    } else {
        printf("Not a valid spelling of Timur.\n");
    }
    
    return 0;
}
