/* 10 LAB EXERCISE:
o Write a C program to demonstrate pointer usage. Use a pointer to modify the
value of a variable and print the result.*/
#include <stdio.h>
int main() {
    int num = 10; 
    int *ptr;   

    ptr = &num;

    printf("Original value of num: %d\n", num);

    *ptr = 20;

    printf("Modified value of num using pointer: %d\n", num);

    return 0;
}

// output
//Original value of num: 10
//Modified value of num using pointer: 20