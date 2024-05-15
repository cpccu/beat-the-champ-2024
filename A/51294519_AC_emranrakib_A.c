#include <stdio.h>
#include <string.h>

int main() {
    char num1[101], num2[101], result[101];
    scanf("%s", num1);
    scanf("%s", num2);
    
    int length = strlen(num1);
    
    for(int i = 0; i < length; i++) {
        if(num1[i] != num2[i])
            result[i] = '1';
        else
            result[i] = '0';
    }
    result[length] = '\0';
    
    printf("%s\n", result);
    
    return 0;
}
