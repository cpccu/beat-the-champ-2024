#include <stdio.h>
#include <stdlib.h>

// Custom structure to store boy's index and playing skill
typedef struct {
    int index;
    int skill;
} Boy;

// Comparator function for sorting boys based on their playing skills
int compare(const void *a, const void *b) {
    Boy *boy1 = (Boy *)a;
    Boy *boy2 = (Boy *)b;
    return boy2->skill - boy1->skill; // Sort in descending order of playing skill
}

int main() {
    int n;
    scanf("%d", &n);

    // Array of boys with their indices and playing skills
    Boy boys[n];

    // Input the playing skills and store them with indices
    for (int i = 0; i < n; i++) {
        scanf("%d", &boys[i].skill);
        boys[i].index = i + 1; // Boy index starts from 1
    }

    // Sort boys based on playing skills
    qsort(boys, n, sizeof(Boy), compare);

    // Divide boys into two teams
    int team1_count = (n + 1) / 2;
    int team2_count = n - team1_count;

    // Output team assignments
    printf("%d\n", team1_count);
    for (int i = 0; i < team1_count; i++) {
        printf("%d ", boys[i].index);
    }
    printf("\n");

    printf("%d\n", team2_count);
    for (int i = team1_count; i < n; i++) {
        printf("%d ", boys[i].index);
    }
    printf("\n");

    return 0;
}
