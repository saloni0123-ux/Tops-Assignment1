/*LAB EXERCISE:
o Write a C program that accepts two integers from the user and performs
arithmetic, relational, and logical operations on them. Display the results.*/
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    // Arithmetic operations
    printf("\n--- Arithmetic Operations ---\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    if (b != 0) {
        printf("a / b = %d\n", a / b);  
        printf("a %% b = %d\n", a % b); 
    } else {
        printf("Division and modulus by zero are not allowed.\n");
    }

    // Relational operations
    printf("\n--- Relational Operations ---\n");
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);

    // Logical operations
    printf("\n--- Logical Operations ---\n");
    printf("(a && b): %d\n", (a && b));  
    printf("(a || b): %d\n", (a || b));  
    printf("!(a): %d\n", !a);            
    printf("!(b): %d\n", !b);           

    return 0;
}
