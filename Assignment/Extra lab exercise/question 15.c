/*LAB EXERCISE 2: Count Vowels and Consonants
• Write a C program that takes a string from the user and counts the number of vowels and
consonants in the string.
• Challenge: Extend the program to also count digits and special characters.*/
#include <stdio.h>
#include <ctype.h>
void countVowelsAndConsonants(char str[], int *vowels, int *consonants) {
    *vowels = 0;
    *consonants = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);

        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                (*vowels)++;
            else
                (*consonants)++;
        }
    }
}

int main() {
    char str[100];
    int vowels, consonants;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    countVowelsAndConsonants(str, &vowels, &consonants);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
}
