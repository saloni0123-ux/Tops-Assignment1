/*6 Strings
LAB EXERCISE 1: String Reversal
• Write a C program that takes a string as input and reverses it using a function.
• Challenge: Write the program without using built-in string handling functions.*/
#include <stdio.h>
#include <string.h>
void reverseString(char str[]) {
    int len = strlen(str);
    char temp;

    for (int i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf(" %[^\n]", str);  

    reverseString(str);
    printf("Reversed string: %s\n", str);
}
