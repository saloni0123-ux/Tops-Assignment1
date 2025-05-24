/*Lab Challenge 2: Pascal’s Triangle
• Write a C program that generates Pascal’s Triangle up to N rows using loops.
• Challenge: Implement the same program using a recursive function.*/
#include <stdio.h>
int main() {
    int i, j, s, k, n = 5;
    
    for (i = 0; i < n; i++) {
        for (k = 1; k <= n - i; k++) {
            printf(" ");
        }

        int num = 1;
        for (j = 0; j <= i; j++) {
            printf("%d ", num);
            num = num * (i - j) / (j + 1);  // Compute next value in row
        }

        printf("\n");
    }

return 0;
}