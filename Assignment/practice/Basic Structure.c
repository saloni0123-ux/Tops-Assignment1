/*AB EXERCISE:
o Write a C program that includes variables, constants, and comments. Declare
and use different data types (int, char, float) and display their values.*/
#include <stdio.h>
int main() {
    const float PI = 3.14159;
 
    int age = 25;
    char grade = 'A';
    float height = 5.9;

    printf("Constant PI: %.5f\n", PI);      // Display the constant
    printf("Integer age: %d\n", age);       // Display integer variable
    printf("Character grade: %c\n", grade); // Display character variable
    printf("Float height: %.1f\n", height); // Display float variable

    return 0;
}

