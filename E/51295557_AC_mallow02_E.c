#include <stdio.h>
#include <string.h>

int main() {
    char players[101];
 
    scanf("%s", players);
    
    int length = strlen(players);
    int consecutive_zeros = 0, consecutive_ones = 0;

    for (int i = 0; i < length; i++) {
        if (players[i] == '0') {
            consecutive_zeros++;
            consecutive_ones = 0;
        } else {
            consecutive_ones++;
            consecutive_zeros = 0;
        }

        if (consecutive_zeros >= 7 || consecutive_ones >= 7) {
            printf("YES\n");
            return 0;
        }
    }

    printf("NO\n");

    return 0;
}
