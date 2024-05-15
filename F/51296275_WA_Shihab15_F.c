#include <stdio.h>

int min_time_to_ascend(int r, int g, int b) {
    // Calculate the maximum number of cablecars needed for each group
    int max_cablecars = ((r + 1) / 2 > (g + 1) / 2) ? ((r + 1) / 2 > (b + 1) / 2 ? (r + 1) / 2 : (b + 1) / 2) : ((g + 1) / 2 > (b + 1) / 2 ? (g + 1) / 2 : (b + 1) / 2);

    // Calculate the total time for each group to ascend
    int time_r = (r > 0) ? max_cablecars * 30 : 0;
    int time_g = (g > 0) ? max_cablecars * 30 : 0;
    int time_b = (b > 0) ? max_cablecars * 30 : 0;

    // Return the maximum time among the three groups
    return (time_r > time_g) ? ((time_r > time_b) ? time_r : time_b) : ((time_g > time_b) ? time_g : time_b);
}

int main() {
    int r, g, b;
    // Input
    scanf("%d %d %d", &r, &g, &b);

    // Output
    printf("%d\n", min_time_to_ascend(r, g, b));

    return 0;
}
