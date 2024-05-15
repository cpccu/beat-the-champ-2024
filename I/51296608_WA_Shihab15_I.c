#include <stdio.h>
#include <stdlib.h>

// Structure to store the boys' information
typedef struct {
    int index; // Index of the boy
    int skill; // Playing skill of the boy
} Boy;

// Comparison function for sorting boys based on playing skills
int compare(const void *a, const void *b) {
    return ((Boy*)b)->skill - ((Boy*)a)->skill; // Sort in descending order of skills
}

int main() {
    int n; // Number of boys
    scanf("%d", &n);
    
    Boy boys[n]; // Array to store boys' information
    
    // Read boys' playing skills and store them in the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &boys[i].skill);
        boys[i].index = i + 1; // Indexing starts from 1
    }
    
    // Sort boys based on their playing skills
    qsort(boys, n, sizeof(Boy), compare);
    
    int total_skill = 0; // Total playing skill of all boys
    for (int i = 0; i < n; i++) {
        total_skill += boys[i].skill;
    }
    
    // Calculate the skill of the best player (the first boy in the sorted array)
    int best_skill = boys[0].skill;
    
    // Determine the sizes of the two teams
    int x = (n + 1) / 2; // Size of the first team
    int y = n / 2;       // Size of the second team
    
    // Ensure that the difference in total skills of the two teams doesn't exceed the skill of the best player
    while (x * best_skill - total_skill > best_skill || y * best_skill - total_skill > best_skill) {
        x--;
        y++;
    }
    
    // Output the teams
    printf("%d\n", x);
    for (int i = 0; i < x; i++) {
        printf("%d ", boys[i].index);
    }
    printf("\n%d\n", y);
    for (int i = x; i < n; i++) {
        printf("%d ", boys[i].index);
    }
    printf("\n");
    
    return 0;
}
