/*1. Operators
LAB EXERCISE 1: Simple Calculator
• Write a C program that acts as a simple calculator. The program should take two numbers
and an operator as input from the user and perform the respective operation (addition,
subtraction, multiplication, division, or modulus) using operators.
• Challenge: Extend the program to handle invalid operator inputs.*/
#include <stdio.h>
 main() {
    float num1, num2;
    char op;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch(op) {
        case '+':
            printf("Result: %.2f\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2f\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2f\n", num1 * num2);
            break;
        case '/':
            if (num2 == 0)
                printf("Error: Division by zero is not allowed.\n");
            else
                printf("Result: %.2f\n", num1 / num2);
            break;
        case '%':
            if ((int)num2 == 0)
                printf("Error: Modulus by zero is not allowed.\n");
            else
                printf("Result: %d\n", (int)num1 % (int)num2);
            break;
        default:
            printf("Error: Invalid operator '%c'\n", op);
    }
}
