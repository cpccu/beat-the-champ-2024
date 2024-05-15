#include <stdio.h>
#include <math.h>

// Function to check if a number is a perfect square
int isPerfectSquare(int num) {
    int squareRoot = sqrt(num);
    return squareRoot * squareRoot == num;
}

// Function to check if a number is a triangular number
int isTriangular(int num) {
    // A number is a triangular number if 8*num + 1 is a perfect square
    return isPerfectSquare(8 * num + 1);
}

int main() {
    int number;
    
    printf("Enter an integer to check if it is a triangular number: ");
    scanf("%d", &number);
    
    if (isTriangular(number)) {
        printf("%d is a triangular number.\n", number);
    } else {
        printf("%d is not a triangular number.\n", number);
    }
    
    return 0;
}
