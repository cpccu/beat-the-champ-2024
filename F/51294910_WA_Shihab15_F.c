#include <stdio.h>
#include <stdlib.h>

int main() {
    int r, g, b;
    scanf("%d %d %d", &r, &g, &b);
    
    int min_students = (r < g && r < b) ? r : (g < b) ? g : b;
    int max_wait_time = min_students * 30;
    
    int additional_wait_time = abs(r - min_students) + abs(g - min_students) + abs(b - min_students);
    
    int total_time = max_wait_time + additional_wait_time;
    
    printf("%d\n", total_time);
    
    return 0;
}
