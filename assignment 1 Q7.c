assignment 1 Q7
//wap to convert binary to decimal and decimal to binary

#include <stdio.h>
#include <math.h>

// Function to convert Binary to Decimal
int binaryToDecimal(int binary) {
    int decimal = 0, i = 0, remainder;
    
    while (binary != 0) {
        remainder = binary % 10;
        decimal += remainder * pow(2, i);
        binary /= 10;
        i++;
    }

    return decimal;
}

// Function to convert Decimal to Binary
void decimalToBinary(int decimal) {
    int binary[32], i = 0;
    
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int choice, num;

    printf("Choose conversion:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a binary number: ");
        scanf("%d", &num);
        printf("Decimal equivalent: %d\n", binaryToDecimal(num));
    } else if (choice == 2) {
        printf("Enter a decimal number: ");
        scanf("%d", &num);
        decimalToBinary(num);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
