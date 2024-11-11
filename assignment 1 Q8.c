assignment 1 Q8
//wap to print binary pattern pyramid

#include <stdio.h>

int main() {
    int n = 5;  // Number of rows

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            // Print 1 if (i + j) is even, otherwise print 0
            if ((i + j) % 2 == 0)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }

    return 0;
}
