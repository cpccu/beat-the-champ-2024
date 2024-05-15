#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int answer_options[n]; // Array to store the number of answer options for each question
    
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &answer_options[i]);
    }
    
    int total_clicks = 0; 
    
 
    for(int i = 0; i < n; i++) {
        total_clicks += answer_options[i];
    }
    

    printf("%d\n", total_clicks);
    
    return 0;
}
