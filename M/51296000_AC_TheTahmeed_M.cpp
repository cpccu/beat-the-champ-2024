#include <stdio.h>
#include <string.h>

// Function to check if two strings are permutations of each other
int arePermutations(const char *str1, const char *str2) {
    // Length of both strings must be equal
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 != len2)
        return 0;

    // Sort both strings
    int count1[256] = {0};
    int count2[256] = {0};

    for (int i = 0; i < len1; i++) {
        count1[str1[i]]++;
        count2[str2[i]]++;
    }

    // Compare character counts
    for (int i = 0; i < 256; i++) {
        if (count1[i] != count2[i])
            return 0;
    }
    return 1;
}

int main() {
    int numTestCases;
    scanf("%d", &numTestCases);

    const char *reference = "Timur";
    char results[numTestCases][50];
    int resultIndex = 0;

    for (int t = 0; t < numTestCases; t++) {
        int length;
        scanf("%d", &length);

        char original[length + 1];
        scanf("%s", original);

        if (arePermutations(reference, original))
            sprintf(results[resultIndex++], "YES");
        else
            sprintf(results[resultIndex++], "NO");
    }

    // Print all results
    for (int i = 0; i < resultIndex; i++) {
        printf("%s\n", results[i]);
    }

    return 0;
}
