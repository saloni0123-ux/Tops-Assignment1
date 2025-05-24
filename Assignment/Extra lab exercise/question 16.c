/*LAB EXERCISE 3: Word Count
• Write a C program that counts the number of words in a sentence entered by the user.
• Challenge: Modify the program to find the longest word in the sentence.*/
#include <stdio.h>
main() {
    int len = 0, c = 1;
    char s[40];

    printf("Enter a string: ");
    scanf(" %[^\n]", s); 

    while (s[len] != '\0') {
        if (s[len] == ' ') {
            c++;
        }
        len++;
    }

    printf("Total words: %d\n", c);
}
