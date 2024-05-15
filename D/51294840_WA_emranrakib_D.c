#include <stdio.h>

int main() {
    int n; // Number of questions
    scanf("%d", &n);
    
    int answer_options[n]; // Array to store the number of answer options for each question
    
    // Read the number of answer options for each question
    for(int i = 0; i < n; i++) {
        scanf("%d", &answer_options[i]);
    }
    
    long long total_clicks = 0; // Variable to store the total number of clicks, using long long to handle large inputs
    
    // Calculate the total number of clicks
    for(int i = 0; i < n; i++) {
        total_clicks += answer_options[i];
    }
    
    // Print the total number of clicks
    printf("%lld\n", total_clicks);
    
    return 0;
}
