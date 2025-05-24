/*LAB EXERCISE:
o Write a C program that calculates the factorial of a number using a function.
Include function declaration, definition, and call*/
#include <stdio.h>
unsigned long long factorial(int n);
int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
    
        unsigned long long result = factorial(number);
        printf("Factorial of %d = %llu\n", number, result);
    }
    return 0;
}
unsigned long long factorial(int n) {
    if (n == 0) {
        return 1; 
    } else {
        return n * factorial(n - 1); 
    }
}