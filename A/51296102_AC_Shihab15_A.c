#include <stdio.h>
#include <string.h>

int main() {
    char num1[105], num2[105], answer[105];
    scanf("%s %s", num1, num2);
    
    int len = strlen(num1);
    for (int i = 0; i < len; i++) {
        if (num1[i] != num2[i]) {
            answer[i] = '1';
        } else {
            answer[i] = '0';
        }
    }
    answer[len] = '\0'; // Null-terminate the string
    
    printf("%s\n", answer);
    
    return 0;
}