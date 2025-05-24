/* 8 LAB EXERCISE:
o Write a C program that uses the break statement to stop printing numbers
when it reaches 5. Modify the program to skip printing the number 3 using the
continue statement.*/
#include <stdio.h>
int main() {
    int i;
    printf("Printing numbers until 5 using break:\n");
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            break; 
        }
        printf("%d ", i);
    }
    printf("\n");

    printf("Printing numbers from 1 to 10 but skipping 3 using continue:\n");
    for (i = 1; i <= 10; i++) {
        if (i == 3) {
            continue; 
        }
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}