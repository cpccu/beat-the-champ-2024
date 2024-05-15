#include <stdio.h>
#include <stdlib.h>

// Structure to store boy's index and skill
typedef struct {
    int index;
    int skill;
} Boy;

// Function to compare two boys based on their skills
int compare(const void *a, const void *b) {
    return ((Boy *)b)->skill - ((Boy *)a)->skill;
}

int main() {
    int n;
    scanf("%d", &n);

    Boy boys[n];
    int total_skill = 0;
    int max_skill = 0;

    // Input boys' skills and calculate total skill
    for (int i = 0; i < n; i++) {
        scanf("%d", &boys[i].skill);
        boys[i].index = i + 1;
        total_skill += boys[i].skill;
        if (boys[i].skill > max_skill) {
            max_skill = boys[i].skill;
        }
    }

    // Sort boys based on their skills
    qsort(boys, n, sizeof(Boy), compare);

    // Determine team sizes
    int x = n / 2;
    int y = n - x;

    // Print team sizes
    printf("%d\n", x);
    for (int i = 0; i < x; i++) {
        printf("%d ", boys[i].index);
    }
    printf("\n");

    printf("%d\n", y);
    for (int i = x; i < n; i++) {
        printf("%d ", boys[i].index);
    }
    printf("\n");

    return 0;
}
