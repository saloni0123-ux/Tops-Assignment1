/*LAB EXERCISE 3: Palindrome Check
• Write a C program that takes a number as input and checks whether it is a palindrome using
a function.
• Challenge: Modify the program to check if a given string is a palindrome*/
#include <stdio.h>
isPalindromeNumber(int num) {
    int original = num, reversed = 0, digit;
    
    while (num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return original == reversed;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPalindromeNumber(number))
        printf("%d is a palindrome.\n", number);
    else
        printf("%d is not a palindrome.\n", number);
}
