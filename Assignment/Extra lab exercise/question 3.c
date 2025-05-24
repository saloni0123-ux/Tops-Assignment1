/*LAB EXERCISE 1: Grade Calculator
• Write a C program that takes the marks of a student as input and displays the corresponding
grade based on the following conditions:
o Marks > 90: Grade A
o Marks > 75 and <= 90: Grade B
o Marks > 50 and <= 75: Grade C
o Marks <= 50: Grade D
• Use if-else orswitch statements for the decision-making process.*/
#include <stdio.h>
main() {
    int marks;
    printf("Enter student's marks (0 - 100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid marks. Please enter a value between 0 and 100.\n");
        return 1;
    }

    if (marks > 90) {
        printf("Grade: A\n");
    } else if (marks > 75) {
        printf("Grade: B\n");
    } else if (marks > 50) {
        printf("Grade: C\n");
    } else {
        printf("Grade: D\n");
    }

}

