assignment 1 Q5
//wap to check if number is a perfect number or not

#include <stdio.h>

int main() {
    int num, sum = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find divisors and calculate the sum
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;  // Add the divisor to the sum
        }
    }

    // Check if sum of divisors is equal to the number
    if (sum == num) {
        printf("%d is a Perfect Number.\n", num);
    } else {
        printf("%d is not a Perfect Number.\n", num);
    }

    return 0;
}