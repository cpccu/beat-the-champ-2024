#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    char players[101];
    scanf("%s", players);

    int length = strlen(players);
    bool dangerous = false;

    // Initialize counters for consecutive players of each team
    int count_team_0 = 0;
    int count_team_1 = 0;

    // Iterate through the string
    for (int i = 0; i < length; i++) {
        // If current player is of team 0
        if (players[i] == '0') {
            // Increment counter for team 0 and reset counter for team 1
            count_team_0++;
            count_team_1 = 0;
        }
        // If current player is of team 1
        else {
            // Increment counter for team 1 and reset counter for team 0
            count_team_1++;
            count_team_0 = 0;
        }

        // If either team has 7 or more consecutive players, situation is dangerous
        if (count_team_0 >= 7 || count_team_1 >= 7) {
            dangerous = true;
            break;
        }
    }

    // Output result
    if (dangerous) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
