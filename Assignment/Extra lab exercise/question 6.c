/*LAB EXERCISE 2: Multiplication Table
• Write a C program that takes an integer input from the user and prints its multiplication
table using a for loop.
• Challenge: Allow the user to input the range of the multiplication table (e.g., from 1 to N).*/
#include<stdio.h>
 int main() {
    int number, start, end;
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &number);

    printf("Enter the starting value of the range: ");
    scanf("%d", &start);

    printf("Enter the ending value of the range: ");
    scanf("%d", &end);

    if (start > end) {
        printf("Invalid range! Start value should be less than or equal to end value.\n");
        return 1;
    }
    printf("\nMultiplication Table of %d from %d to %d:\n", number, start, end);
    for (int i = start; i <= end; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    return 0;
}
