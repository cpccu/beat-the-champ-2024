#include <stdio.h>

int main() {
    int n; // number of questions
    scanf("%d", &n);
    
    int a[n]; // array to store the number of answer variants for each question
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int total_clicks = 0;
    for (int i = 0; i < n; i++) {
        total_clicks += a[i];
    }
    total_clicks -= n; // subtracting the number of questions
    
    printf("%d\n", total_clicks);
    
    return 0;
}
