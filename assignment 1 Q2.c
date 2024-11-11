//ASSIGNMENT 1
//Q2 HCF of two numbers


#include <stdio.h>

int main() {
    int num1, num2, hcf;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    for (int i = 1; i <= num1 && i <= num2; ++i) {
        // Check if i is a factor of both numbers
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }

    printf("HCF of %d and %d is %d\n", num1, num2, hcf);

    return 0;
}
