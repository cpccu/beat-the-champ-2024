#include <stdio.h>

int main() {
    char num1[101], num2[101], ans[101];
    scanf("%s %s", num1, num2);

    for (int i = 0; num1[i] != '\0'; i++) {
        if (num1[i] != num2[i])
            ans[i] = '1';
        else
            ans[i] = '0';
    }
    ans[strlen(num1)] = '\0';
    printf("%s\n", ans);

    return 0;
}