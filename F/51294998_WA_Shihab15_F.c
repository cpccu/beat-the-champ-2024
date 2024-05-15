#include <stdio.h>
#include <math.h>

int main() {
    int r, g, b;
    scanf("%d %d %d", &r, &g, &b);
    
    // Calculate the number of cablecars required for each group
    int red_cars = (r + 1) / 2;
    int green_cars = (g + 1) / 2;
    int blue_cars = (b + 1) / 2;
    
    // Calculate the maximum time taken
    int max_time = fmax(red_cars, fmax(green_cars, blue_cars)) * 30;
    
    printf("%d\n", max_time);
    
    return 0;
}
