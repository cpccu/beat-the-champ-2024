#include <stdio.h>


long long int maxWeightForLength(int length) {
    long long int n = 0;
    for (int i = 0; i < length; i++) {
        n = n * 10 + 9;
    }
    return n * (n - 1);
}

int main() {
    long long int l, r;
    

    scanf("%lld %lld", &l, &r);

    int length_l = 0, length_r = 0;
    long long int temp_l = l, temp_r = r;
    while (temp_l > 0) {
        length_l++;
        temp_l /= 10;
    }
    while (temp_r > 0) {
        length_r++;
        temp_r /= 10;
    }
    
 
    long long int max_weight = maxWeightForLength(length_l);
    if (length_l != length_r) {
        max_weight = (max_weight > maxWeightForLength(length_r)) ? max_weight : maxWeightForLength(length_r);
    }
  
    printf("%lld\n", max_weight);
    
    return 0;
}
