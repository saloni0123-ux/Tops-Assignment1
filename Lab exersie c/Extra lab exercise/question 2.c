/*LAB EXERCISE 2: Check Number Properties
• Write a C program that takes an integer from the user and checks the following using
different operators:
o Whether the number is even or odd.
o Whether the number is positive, negative, or zero.
o Whether the number is a multiple of both 3 and 5*/
#include <stdio.h>
main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check even or odd
    if (num % 2 == 0)
        printf("%d is Even.\n", num);
    else
        printf("%d is Odd.\n", num);

    // Check positive, negative or zero
    if (num > 0)
        printf("%d is Positive.\n", num);
    else if (num < 0)
        printf("%d is Negative.\n", num);
    else
        printf("The number is Zero.\n");

    // Check if multiple of both 3 and 5
    if (num % 3 == 0 && num % 5 == 0)
        printf("%d is a multiple of both 3 and 5.\n", num);
    else
        printf("%d is not a multiple of both 3 and 5.\n", num);

}


