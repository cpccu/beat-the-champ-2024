#include <stdio.h>
#include <string.h>

int main() {
    char number1[101];  
    char number2[101];  
    char result[101];
    if (scanf("%100s", number1) != 1 || scanf("%100s", number2) != 1) {
        return 1;
    }

    int length;
length = strlen(number1);

    for (int i = 0; i < length; ++i) {
        if (number1[i] != number2[i]) {
            result[i] = '1';
        } else {
            result[i] = '0';
        }
    }

   
    result[length] = '\0';

 
    printf("%s\n", result);

    return 0;
}
