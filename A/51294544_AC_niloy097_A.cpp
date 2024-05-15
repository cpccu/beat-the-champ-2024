#include <stdio.h>
int main()
{
    char str1[1000], str2[1000];
    while (scanf("%s%s", str1, str2) == 2)
    {
        char ans[1000];
        int i;
        for (i = 0; str1[i] != '\0'; i++)
            if (str1[i] == str2[i])
                ans[i] = '0';
            else
                ans[i] = '1';
        ans[i] = '\0';
        printf("%s\n", ans);
    }
    return 0;
}